#include <iostream>
#include <vector>
#include <utility>
using namespace std;
using ll = long long;

int main(){
    ll n=0;
    ll contador=0;
    cin>>n;
    vector<pair<ll,ll>> score(n);
    for(int i = 0; i < n; i++){
        cin >> score[i].first >> score[i].second;
    }

    for (int j = 1; j < n; j++){
        if ((score[j].first < score[j-1].first) || (score[j].second < score[j-1].second)){
            contador++;
        }
        
    }
    
    if(contador!=0){
        cout << "no\n";
    }else{
        cout << "yes\n";
    }

    return 0;
}