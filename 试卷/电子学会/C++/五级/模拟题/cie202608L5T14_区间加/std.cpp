#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, m; cin >> n >> m;
    long long d[100005] = {0};
    while (m--) {
        int l, r; long long x; cin >> l >> r >> x;
        d[l] += x; if (r + 1 <= n) d[r+1] -= x;
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) { cur += d[i]; cout << cur << (i==n?"\n":" "); }
    return 0;
}