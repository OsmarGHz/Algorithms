#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n>3){
        for (int i=n-1;i>0;i-=2){
            cout << i << " ";
        }
        for (int i=n;i>0;i-=2){
            cout << i << " ";
        }
    }else if(n==1){
        cout << "1";
    }else{
        cout << "NO SOLUTION";
    }
}