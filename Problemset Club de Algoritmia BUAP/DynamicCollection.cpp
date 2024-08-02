#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long lli;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,q,value; cin >> n >> q;
    map <int,int> collection;
    vector <int> numberOfNumbers(1000000000,0);
    vector <lli> slideNumbers(1000000000,0);
    for (int i = 0; i < n; i++){
        cin >> value;
        if (collection.count(value)){
            collection[value]++;
        }else{
            //collection.insert({value,1});
            collection.insert(pair<int,int> (value,1));
        }
    }
    int election, param1, param2, counter=0;
    map <int,int>::iterator it;
    for (int i = 0; i < q; i++){
        cin >> election;
        if (election==1){
            cin >> param1;
            if (collection.count(param1)) continue;
            if (param1 >= (*--collection.end()).first){ // Param1 vs greatest element
                collection.insert(pair<int,int> (param1,1));
                continue;
            }else{
                collection.insert(pair<int,int> (param1,1));
                it = ++collection.find(param1);
                if (it->second > 1){
                    it->second--;
                }else{
                    collection.erase(it);
                }
            }
        }else{
            cin >> param1 >> param2;
            counter = 0;
            it = collection.find(param1);
            if (it==collection.end()){
                it = collection.upper_bound(param1);
            }
            while (it != collection.end() && it->first<=param2){
                counter+=it->second;
                it++;
            }
            cout << counter << "\n";
        }
    }
    
    
}