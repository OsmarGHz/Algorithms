
#include <bits/stdc++.h>
using namespace std;
int f(long long *arr, long long x, int n){
    int indx = 0, l = 1, r = n, mid;
    while(r >= l){
            mid = (l + r) / 2;
            if(*(arr + mid) <= x){
                indx = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
    return indx;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    long long arr[n + 1], x;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    while(k--){
        cin >> x;
        int res = f(arr, x, n);
        //if(res > 0)
          //  res++;
        cout << res << endl;
    }
    return 0;
}