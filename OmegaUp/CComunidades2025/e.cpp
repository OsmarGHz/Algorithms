#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){
    vector<int> h(4);
    cin >> h[0] >> h[1] >> h[2] >> h[3];
    sort(all(h));
    cout << abs(abs(h[3]+h[0])-abs(h[1]+h[2]));
}