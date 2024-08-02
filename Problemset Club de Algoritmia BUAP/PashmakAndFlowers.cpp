#include <iostream>
#include <vector>
using namespace std;
typedef long long lli;

int main(){
    lli n, maxNumber=0, repetitionsMax=0, minNumber=1000000000, repetitionsMin=0, difference, combinations;
    cin >> n;
    vector <lli> flowers(n);
    for (lli i = 0; i < n; i++){
        cin >> flowers[i];
    }
    for (lli i = 0; i < n; i++){
        if (flowers[i]==minNumber){
            repetitionsMin++;
        }else if(flowers[i]<minNumber){
            repetitionsMin=1;
            minNumber = flowers[i];
        }
        
        if(flowers[i]==maxNumber){
            repetitionsMax++;
        }else if(flowers[i]>maxNumber){
            repetitionsMax=1;
            maxNumber = flowers[i];
        }
    }

    difference = maxNumber - minNumber;
    if(difference==0) combinations=(n*(n-1))/2;
    else combinations = repetitionsMin*repetitionsMax;
    cout << difference << " " << combinations << "\n";
}