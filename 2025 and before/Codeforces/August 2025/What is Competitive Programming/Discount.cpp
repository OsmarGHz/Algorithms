#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    double discount = 100-(b/((double(a))/100));
    cout << discount;
}