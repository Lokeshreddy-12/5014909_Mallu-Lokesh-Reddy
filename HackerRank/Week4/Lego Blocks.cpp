#include <bits/stdc++.h>
using namespace std;
static const long long MOD = 1000000007;

long long modexp(long long base, int exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int legoBlocks(int n, int m) {
    vector<long long> row(m+1, 0), total(m+1, 0), solid(m+1, 0);

    row[0] = 1;
    for (int w = 1; w <= m; ++w) {
        long long sum = 0;
        for (int blk = 1; blk <= 4; ++blk)
            if (w - blk >= 0)
                sum = (sum + row[w - blk]) % MOD;
        row[w] = sum;
    }

    for (int w = 0; w <= m; ++w)
        total[w] = modexp(row[w], n);

    solid[0] = 1;
    for (int w = 1; w <= m; ++w) {
        long long unstable = 0;
        for (int left = 1; left <= w - 1; ++left) {
            unstable = (unstable + solid[left] * total[w - left]) % MOD;
        }
        solid[w] = (total[w] - unstable + MOD) % MOD;
    }

    return solid[m];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << legoBlocks(n, m) << "\n";
    }
    return 0;
}
