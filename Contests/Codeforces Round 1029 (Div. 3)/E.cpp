#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,maxRes=-1,i;
        bool suCarril = true;
        cin >> n;
        vector<int> a(n),b(n);
        set<int> seta,setb;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(i=n-1;i>=2;i--){
            if(suCarril){
                seta.insert(a[i]);
                setb.insert(b[i]);
            }else{
                seta.insert(b[i]);
                setb.insert(a[i]);
            }
            if(a[i]==b[i]){
                if(i>maxRes){
                    maxRes = i;
                }
            }else{
                if(suCarril){
                    if(i-1 >= 0 && (seta.count(a[i-1]) || setb.count(b[i-1]))){ //For pivot method
                        if(i-1>maxRes){
                            maxRes = i-1;
                        }
                    }
                    if(i-2 >= 0 && (seta.count(a[i-2]) || setb.count(b[i-2]))){//For pivot with elimination method
                        if(i-2>maxRes){
                            maxRes = i-2;
                        }
                    }
                }else{
                    if(i-1 >= 0 && (seta.count(b[i-1]) || setb.count(a[i-1]))){ //For pivot method
                        if(i-1>maxRes){
                            maxRes = i-1;
                        }
                    }
                    if(i-2 >= 0 && (seta.count(b[i-2]) || setb.count(a[i-2]))){//For pivot with elimination method
                        if(i-2>maxRes){
                            maxRes = i-2;
                        }
                    }
                }
            }
            suCarril = !(suCarril);
        }
        
        if(suCarril){
            seta.insert(a[i]);
            setb.insert(b[i]);
        }else{
            seta.insert(b[i]);
            setb.insert(a[i]);
        }
        if(a[i]==b[i]){
            if(i>maxRes){
                maxRes = i;
            }
        }else{
            if(suCarril){
                if(i-1 >= 0 && (seta.count(a[i-1]) || setb.count(b[i-1]))){ //For pivot method
                    if(i-1>maxRes){
                        maxRes = i-1;
                    }
                }
            }else{
                if(i-1 >= 0 && (seta.count(b[i-1]) || setb.count(a[i-1]))){ //For pivot method
                    if(i-1>maxRes){
                        maxRes = i-1;
                    }
                }
            }
        }
        suCarril = !(suCarril);
        i--;

        if(a[i]==b[i]){
            if(i>maxRes){
                maxRes = i;
            }
        }
        cout << maxRes+1 << "\n";
    }
}