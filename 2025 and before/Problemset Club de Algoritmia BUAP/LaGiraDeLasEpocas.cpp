#include <iostream>
using namespace std;

int main(){
    int n,b,r,l,hDispo,d,hVendi;
    cout << "Ingresa n,b,r y l seguido cada uno de un espacio: ";
    cin >> n >> b >> r >> l;
    hDispo=b-r;
    cout << "Vamos con los clientes: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "¿Cuantos hongos quieres? ";
        cin >> d;
        if (hDispo>=d && d<=l)
        {
            cout << "Vendidos " << d << " hongos" << endl;
            hDispo-=d;
        }else if (hDispo>=d && d>l){
            cout << "Vendidos " << l << " hongos" << endl;
            hDispo-=l;
        }else if (hDispo<d && hDispo>0){
            cout << "Vendidos " << hDispo << " hongos" << endl;
            hDispo=0;
        }else{
            cout << "Vendidos 0 hongos" << endl;
        }
    }
    
}