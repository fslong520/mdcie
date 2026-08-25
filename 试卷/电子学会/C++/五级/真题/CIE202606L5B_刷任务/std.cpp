#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reach(const vector<long long>& v, long long lim) {
    long long s = 0;
    for (int i = 0; i < v.size(); i++) {
        s += v[i];
        if (s > lim) return i + 1;
    }
    return v.size() + 1;
}

int main() {
    int n; long long x, y;
    cin >> n >> x >> y;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int ans = min(reach(a, x), reach(b, y));
    if (ans > n) ans = n;
    cout << ans << endl;
    return 0;
}