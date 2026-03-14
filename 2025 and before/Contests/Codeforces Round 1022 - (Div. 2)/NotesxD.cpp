#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> permutation;
    vector<bool> chosen;
    set<int> answers;
    int t;
    int n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        chosen.clear();
        chosen.resize(n+1);
        permutation.clear();
        answers.clear();

        vector<vector<int>> allPerms;

        for (int j = 1; j <= n; j++){
            permutation.push_back(j);
        }
        do{ allPerms.push_back(permutation);
        } while (next_permutation(permutation.begin(),permutation.end()));

        for (auto &perm : allPerms){
            int j=1;
            int sum=0;
            for(auto &num : perm){
                sum += abs(num - j);
                j++;
            }
            answers.insert(sum);
        }

        cout << answers.size() << "\n";
        
        
        /*
        for(auto &perm : allPerms){
            for(auto &num : perm)
                cout << num << " ";
            cout << "\n";
        }
        */
    }
    
}