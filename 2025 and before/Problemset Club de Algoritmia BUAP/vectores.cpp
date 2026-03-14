#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <char> caracteres(n,'a');

    for (int i = 0; i < caracteres.size(); i++)
    {
        cout << caracteres[i];
    }
    

    vector <pair<char,int>> duos;
    vector <vector<int>> matriz(10,vector<int>(10,0));
    
}