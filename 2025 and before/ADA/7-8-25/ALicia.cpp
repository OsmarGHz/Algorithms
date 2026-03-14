/*

#include <iostream>
#include <vector>
using namespace std;

// int binarySearch(vector<int> & chapas){

// }

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,m,temp;
    cin>>m;
    //vector<int> chapas(m+1);
    // for (int i = 1; i <= m; i++){
    //     cin>>chapas[i];
    // }
    vector<int> whereChapa(100001,0);
    for(int i=1;i<=m;i++){
        cin>>temp;
        whereChapa[temp]=i;
    }
    cin>>n;
    vector <int> llaves(n+1);
    for (int i = 1; i <= n; i++){
        cin>>llaves[i];
    }
    for (int i = 1; i <= n; i++){
        cout << whereChapa[llaves[i]] << " ";
    }

    int encontrado;
    for (int i = 1; i <= n; i++){
        // encontrado=0;
        // for (int j = 1; j <= m; j++){
        //     if(llaves[i]==chapas[j]){
        //         encontrado++;
        //         cout << j << " ";
        //         break;
        //     }
        // }
        // if(encontrado==0){
        //     cout << 0 << " ";
        // }
    }
    
}

*/

#include <iostream>
using namespace std;
int chapas[100001];

int main(){
    int m;
    cin>>m;
    int contador=0,dato;
    for(int i=1;i<=m;i++){
        cin>>dato;
        chapas[dato]=contador+1;
        contador+=1;
    }
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        cin>>dato;
        cout << chapas[dato] << " ";
    }
    
}