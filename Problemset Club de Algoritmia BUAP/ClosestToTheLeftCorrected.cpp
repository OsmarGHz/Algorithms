#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    //array<int, 100001> arr;
    vector <int> arr(n);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 0; i < k; i++) {
        int q;
        cin >> q;
        int l = 0, r = n;
        while (l < r) {
            int mid = l + (r - l + 1) / 2;
            if (arr[mid] > q)
                r = mid-1;
            else
                l = mid;
        }
        cout << l << '\n';
    }
}