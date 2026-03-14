#include <iostream>
using namespace std;

int main(){
    int n,b,r,l,hDispo,d;
    cin >> n >> b >> r >> l;
    hDispo=b-r;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        if (hDispo>=d && d<=l)
        {
            cout << d << endl;
            hDispo-=d;
        }else if (hDispo>=l && d>l){
            cout << l << endl;
            hDispo-=l;
        }else if (hDispo<d && hDispo>0){
            cout << hDispo << endl;
            hDispo=0;
        }else{
            cout << 0 << endl;
        }
    }
}