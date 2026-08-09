#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
int main(){
    int n,x,a,b;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin>>vec[i];
    }

    cin>>x>>a>>b;

    vec.erase(vec.begin()+x-1);
    vec.erase(vec.begin()+a-1, vec.begin()+b-1);

    cout << vec.size() << "\n";
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    
}