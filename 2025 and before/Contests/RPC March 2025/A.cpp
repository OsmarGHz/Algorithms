#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
using ll = long long;

int main(){
    int n,m,r,nPending=0,foundAt,elevar,tamano,correcta,posTeamFav,pointer;
    string pet,temp,comeO;
    cin >> n >> m >> r;
    posTeamFav = r-1;
    vector <string> team(n);
    for (int i = 0; i < n; i++){
        cin >> team[i];
        foundAt = -1;
        do{ foundAt = team[i].find("P",foundAt+1);
            if (foundAt != -1){
                nPending++;
            }
        } while (foundAt != -1);
    }
    for (int i = 0; i < nPending; i++){
        cin >> comeO;
        cin >> pet;
        tamano = pet.size();
        if(pet[3] == 'y'){
            elevar = tamano - 9;
            correcta = 1;
        }else{
            correcta = 0;
        }
        pointer = team.size()-1;
        do{
            foundAt = team[pointer].find("P",0);
            if (foundAt != -1){
                if (correcta==0) team[pointer][foundAt] = 'R';
                else{
                    team[pointer][foundAt] = 'A';
                    temp = team[pointer];
                    team.erase(team.begin()+pointer);
                    if (pointer==posTeamFav){
                        posTeamFav = pointer-elevar;
                    }else if (pointer-elevar <= posTeamFav){
                        posTeamFav++;
                    }
                    team.insert(team.begin()+(pointer-elevar),temp);
                }
            }else{
                pointer--;
            }
        } while (foundAt == -1);
    }
    cout << posTeamFav+1;
}