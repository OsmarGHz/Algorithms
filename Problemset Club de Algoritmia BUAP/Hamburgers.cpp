#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main(){
    string recipe;
    bool valid;
    int nBread, nSausace, nCheese, priceBre, priceSau, priceChe, breNeeded = 0, sauNeeded = 0, cheNeeded = 0;
    lli money, totalPossible=0;
    cin >> recipe >> nBread >> nSausace >> nCheese >> priceBre >> priceSau >> priceChe >> money;
    for (char c : recipe){
        switch (c){
            case 'B': breNeeded++; break;
            case 'S': sauNeeded++; break;
            case 'C': cheNeeded++; break;
            default: break;
        }
    }
    vector <int> resDivition(3), resModule(3);
    if (breNeeded) resDivition[0] = nBread/breNeeded;
    else resDivition[0] = 100000;
    if (sauNeeded) resDivition[1] = nSausace/sauNeeded;
    else resDivition[1] = 100000;
    if (cheNeeded) resDivition[2] = nCheese/cheNeeded;
    else resDivition[2] = 100000;
    int a = *min_element(resDivition.begin(), resDivition.end()), requiredPieces, requiredMoney;
    totalPossible += a;
    nBread -= (breNeeded*a);
    nSausace -= (sauNeeded*a);
    nCheese -= (cheNeeded*a);
    do{ 
        if (breNeeded){
            if (sauNeeded){
                if (cheNeeded){
                    if (nBread==0 && nSausace==0 && nCheese==0) { valid = false; break; }
                }else{
                    if (nBread==0 && nSausace==0) { valid = false; break; }
                }
            }else{
                if (nBread==0) { valid = false; break; }
            }
        }else if (sauNeeded){
            if (cheNeeded){
                if (nSausace==0 && nCheese==0) { valid = false; break; }
            }else{
                if (nSausace==0) { valid = false; break; }
            }
        }else if (cheNeeded){
            if (nCheese==0) { valid = false; break; }
        }
        
        if (breNeeded) { resDivition[0] = nBread/breNeeded; resModule[0] = nBread%breNeeded; } else { resDivition[0]=0; resModule[0]=0; }
        if (sauNeeded) { resDivition[1] = nSausace/sauNeeded; resModule[1] = nSausace%sauNeeded; } else { resDivition[1]=0; resModule[1]=0; }
        if (cheNeeded) { resDivition[2] = nCheese/cheNeeded; resModule[2] = nCheese% cheNeeded; } else { resDivition[2]=0; resModule[2]=0; }
        
        if (resDivition[0]==0 && breNeeded){
            requiredPieces = breNeeded-resModule[0];
            requiredMoney = requiredPieces*priceBre;
            if (money >= requiredMoney){
                money -= requiredMoney;
                nBread += requiredPieces;
            }else{
                valid == false;
                break;
            }
        }
        if (resDivition[1]==0 && sauNeeded){
            requiredPieces = sauNeeded-resModule[1];
            requiredMoney = requiredPieces*priceSau;
            if (money >= requiredMoney){
                money -= requiredMoney;
                nSausace += requiredPieces;
            }else{
                valid == false;
                break;
            }
        }
        if (resDivition[2]==0 && cheNeeded){
            requiredPieces = cheNeeded-resModule[2];
            requiredMoney = requiredPieces*priceChe;
            if (money >= requiredMoney){
                money -= requiredMoney;
                nCheese += requiredPieces;
            }else{
                valid == false;
                break;
            }
        }
        nBread -= breNeeded;
        nSausace -= sauNeeded;
        nCheese -= cheNeeded;
        totalPossible++;
        valid=true;
    }while(valid);

    requiredMoney = (breNeeded*priceBre) + (sauNeeded*priceSau) + (cheNeeded*priceChe);
    totalPossible = totalPossible + (money/requiredMoney);

    cout << totalPossible;
}