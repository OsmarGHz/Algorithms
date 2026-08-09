#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

int main(){
    int n, res=0;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    sort(all(a));
    int currentEle = a[0], contEle=1;
    for (int i = 1; i < n; i++){
        if(a[i]==currentEle){
            contEle++;
        }else{
            if(contEle < currentEle){
                res+=contEle;
            }else if(contEle > currentEle){
                res += (contEle - currentEle);
            }
            contEle=1;
            currentEle = a[i];
        }
    }

    if(contEle < currentEle){
        res+=contEle;
    }else if(contEle > currentEle){
        res += (contEle - currentEle);
    }

    cout << res;

    
}