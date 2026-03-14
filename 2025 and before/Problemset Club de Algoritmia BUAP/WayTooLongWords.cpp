#include <string>
#include <iostream>
using namespace std;

int main(){
    string a, fin, b;
    char char1, char2;
    int n, longitud, longMostrada;
    cin >> n;
    for (int i = 0; i < n; i++){
        b.clear();
        fin.clear();
        cin >> a;
        longitud = a.size(), longMostrada = longitud-2;
        if (longitud>10){
            char1 = a[0];
            char2 = a[longitud-1];
            fin.push_back(char1);
            b = to_string(longMostrada);
            fin.append(b);
            fin.push_back(char2);
            cout << fin << "\n";
        }else cout << a << "\n";
        
    }
    
    
}