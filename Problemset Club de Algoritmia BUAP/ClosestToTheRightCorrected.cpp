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
        int l = 1, r = n + 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] < q)
                l = mid + 1;
            else
                r = mid;
        }
        cout << l << '\n';
    }
}