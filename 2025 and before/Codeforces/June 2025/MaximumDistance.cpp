#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    int maxi=0;
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int i = 0; i < n; i++){
        cin >> y[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int a = x[j] - x[i];
            int b = y[j] - y[i];
            maxi = max(maxi,a*a+b*b);
             // if the square of the distance between the two points is greater than
             // our current maximum, then update the maximum
        }
    }
    cout << maxi;
}