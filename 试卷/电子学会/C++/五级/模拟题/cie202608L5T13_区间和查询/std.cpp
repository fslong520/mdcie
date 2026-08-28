#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, q; cin >> n >> q;
    long long pre[100005] = {0};
    for (int i = 1; i <= n; i++) { long long x; cin >> x; pre[i] = pre[i-1] + x; }
    while (q--) { int l, r; cin >> l >> r; cout << pre[r] - pre[l-1] << "\n"; }
    return 0;
}