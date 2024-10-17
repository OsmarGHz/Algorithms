#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    lli nSubstances, nQueries, i, lSide, rSide, res, resmod, sumRange, sumRangeToSquare, sumSquaresRange;
    cin >> nSubstances >> nQueries;
    vector <lli> jumpEnergySub(nSubstances), sumSubstances(nSubstances), squareSubstances(nSubstances), sumSquareSubstances(nSubstances);
    cin >> jumpEnergySub[0];
    sumSubstances[0] = jumpEnergySub[0];
    squareSubstances[0] = jumpEnergySub[0]*jumpEnergySub[0];
    sumSquareSubstances[0] = squareSubstances[0];
    for (i = 1; i < nSubstances; i++){
        cin >> jumpEnergySub[i];
        sumSubstances[i] = sumSubstances[i-1] + jumpEnergySub[i];
        squareSubstances[i] = jumpEnergySub[i]*jumpEnergySub[i];
        sumSquareSubstances[i] = sumSquareSubstances[i-1] + squareSubstances[i];
    }
    for (i = 0; i < nQueries; i++){
        cin >> lSide >> rSide;
        lSide--;
        rSide--;
        if (lSide==0){
            sumRange = sumSubstances[rSide];
            sumRangeToSquare = (sumRange*sumRange);
            sumSquaresRange = sumSquareSubstances[rSide];
        }else{
            sumRange = sumSubstances[rSide]-sumSubstances[lSide-1];
            sumRangeToSquare = (sumRange*sumRange);
            sumSquaresRange = sumSquareSubstances[rSide]-sumSquareSubstances[lSide-1];
        }
        res = sumRangeToSquare - sumSquaresRange;
        res /= 2;
        resmod = res%1000000007;
        cout << resmod << "\n";
    }
    
    
}