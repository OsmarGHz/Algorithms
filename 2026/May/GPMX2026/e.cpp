#include <bits/stdc++.h>
using namespace std;

static void dfs(int value, int startIndex, const vector<int>& primes, int limit, vector<int>& order) {
    for (int i = startIndex; i < (int)primes.size(); ++i) {
        int prime = primes[i];
        if (value > limit / prime) break;
        int nextValue = value * prime;
        order.push_back(nextValue);
        dfs(nextValue, i, primes, limit, order);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<char> isPrime(N + 1, true);
    if (N >= 0) isPrime[0] = false;
    if (N >= 1) isPrime[1] = false;

    vector<int> primes;
    for (int i = 2; 1LL * i * i <= N; ++i) {
        if (!isPrime[i]) continue;
        for (int j = i * i; j <= N; j += i) isPrime[j] = false;
    }
    for (int i = 2; i <= N; ++i) {
        if (isPrime[i]) primes.push_back(i);
    }

    vector<int> order;
    order.reserve(N);
    order.push_back(1);
    dfs(1, 0, primes, N, order);

    while (Q--) {
        int K;
        cin >> K;
        cout << order[K - 1] << '\n';
    }

    return 0;
}