#include <bits/stdc++.h>
 
#define ll long long int
using namespace std;
ll a[100005],n;
 
ll binn_left(ll low, ll high, ll key) {
    while (low+1<high) {
        ll mid = (high + low) / 2;
        if (a[mid] <= key)
            low = mid;
        else
            high = mid;
    }
  //  cout<<low+1<<endl;
    return low+1;
}
 
ll binn_right(ll low, ll high, ll key) {
    while (low+1<high) {
        ll mid = (high + low) / 2;
        if (a[mid] < key)
            low = mid;
        else
            high = mid;
    }
      //cout<<high<<endl;
    return high+1;
}
int main() {
    ll k, i, j;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < k; i++) {
        cin >> j;
        cout << binn_right(-1, n, j) << endl;
    }
    return 0;
}