#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;

lli miniBinaryExp(lli a, lli b, lli mod){
    lli res = 1;
    while (b>0){
        if(b & 1){ res = (res*a)%mod; } //Si 1 es impar (vaya nueva forma :o). Es lo mismo que if(b%2==1)
        a = (a*a) % mod;
        b >>= 1; //Es lo mismo que b /= 2; Lo mismo que b = b>>1;
    }
    return res;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    lli nSubstances, nQueries, i, lSide, rSide, res, resmod, sumRange, sumRangeToSquare, sumSquaresRange, mod=1000000007;
    cin >> nSubstances >> nQueries;
    vector <lli> jumpEnergySub(nSubstances), sumSubstances(nSubstances), squareSubstances(nSubstances), sumSquareSubstances(nSubstances);
    cin >> jumpEnergySub[0];
    sumSubstances[0] = jumpEnergySub[0];
    squareSubstances[0] = ((jumpEnergySub[0] % mod) * (jumpEnergySub[0] % mod)) % mod;
    sumSquareSubstances[0] = squareSubstances[0];
    for (i = 1; i < nSubstances; i++){
        cin >> jumpEnergySub[i];
        sumSubstances[i] = ((sumSubstances[i-1] % mod) + (jumpEnergySub[i] % mod)) % mod;
        squareSubstances[i] = ((jumpEnergySub[i] % mod) * (jumpEnergySub[i] % mod)) % mod;
        sumSquareSubstances[i] = ((sumSquareSubstances[i-1] % mod) + (squareSubstances[i] % mod)) % mod;
    }
    for (i = 0; i < nQueries; i++){
        cin >> lSide >> rSide;
        lSide--;
        rSide--;
        if (lSide==0){
            sumRange = sumSubstances[rSide];
            sumRangeToSquare = ((sumRange % mod)*(sumRange % mod)) % mod;
            sumSquaresRange = sumSquareSubstances[rSide];
        }else{
            sumRange = ((sumSubstances[rSide] % mod) + (mod - (sumSubstances[lSide-1] % mod))) % mod; // (a-b)%mod = (a%mod + (mod - b%mod))%mod
            sumRangeToSquare = ((sumRange % mod) * (sumRange % mod)) % mod;
            sumSquaresRange = ((sumSquareSubstances[rSide] % mod) - (sumSquareSubstances[lSide-1] % mod) + mod) % mod; // (a-b)%mod = (a%mod - b%mod + mod)%mod
        }
        res = ((sumRangeToSquare % mod) - (sumSquaresRange % mod) + mod) % mod; // (a-b)%mod = (a%mod - b%mod + mod)%mod
        //res /= 2;
        res = (res * miniBinaryExp(2, mod-2, mod))%mod; // (a/b) % mod es lo mismo que (a * b^(mod-2)) % mod, pero mejorado
        resmod = res%mod;
        cout << resmod << "\n";
    }
}