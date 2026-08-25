#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    int a[105], b[105], c[105];
    set<long long> ab;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ab.insert((long long)a[i] + b[j]);
    int q; cin >> q;
    while (q--) {
        long long x; cin >> x;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (ab.count(x - (long long)c[i])) { ok = true; break; }
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}