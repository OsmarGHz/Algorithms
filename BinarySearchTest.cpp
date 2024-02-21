#include <iostream>
using namespace std;

int main(){
    int valueN,valueK,lI,lS,mit;
    bool founded=false;
    cout << "Ingrese Tamaño del arreglo, espacio, y numero de peticiones de busqueda: ";
    cin >> valueN >> valueK;
    long n[valueN];
    long k[valueK];
    cout << "Ahora, ingrese cada elemento del arreglo seguido de espacios: ";
    for (int i = 0; i < valueN; i++)
    {
        cin >> n[i];
    }
    cout << "Ahora, ingrese cada petición hacia el arreglo seguido de espacios: ";
    for (int j = 0; j < valueK; j++)
    {
        cin >> k[j];
    }
    for (int l = 0; l < valueK; l++)
    {
        lI=0;
        lS=valueN-1;
        mit=(lI + lS)/2;
        cout << mit << " ";
        founded=false;
        while (founded==false && lS>=lI)
        {
            if (k[l]==n[mit])
            {
                cout << "a" << endl;
                founded=true;
            }
            else if (k[l]<n[mit])
            {
                lS=mit-1;
                mit=(lI + lS)/2;
                cout << "LS: " << lS << " Mit: " << mit << " ";
            }
            else if (k[l]>n[mit])
            {
                lI=mit+1;
                mit=(lI + lS)/2;
                cout << "LI: " << lI << " Mit:" << mit << " ";
            }
        }
        if (founded==true)
        {
            cout << "Lo logró" << endl;
        }
        else
        {
            cout << "No pudo" << endl;
        }
    }
    

    return 0;
}