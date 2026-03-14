//Normal Problem
#include <iostream>
#include <string>
using namespace std;

int main(){
    int nTests;
    string a,b;
    cin >> nTests;
    for (int i = 0; i < nTests; i++){
        cin >> a;
        b.erase();
        for (int j = a.length()-1; j >= 0; j--){
            switch (a[j]){
                case 'p': b.push_back('q'); break;
                case 'q': b.push_back('p'); break;
                default: b.push_back('w'); break;
            }
        }
        cout << b << "\n";
    }
    
}