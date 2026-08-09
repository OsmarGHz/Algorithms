#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    if(!(cin >> Q)) return 0;
    vector<int> qs(Q);
    int M = 0;
    for(int i = 0; i < Q; ++i){
        cin >> qs[i];
        M = max(M, qs[i]);
    }

    vector<long double> H(M+1);
    H[0] = 0.0L;
    for(int i = 1; i <= M; ++i) H[i] = H[i-1] + 1.0L / i;

    cout.setf(std::ios::fixed); cout<<setprecision(10);
    for(int x: qs) cout << (double)H[x] << '\n';
    return 0;
}
