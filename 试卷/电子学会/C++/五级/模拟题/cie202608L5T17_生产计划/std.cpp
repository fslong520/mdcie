#include <iostream>
using namespace std;
int n;
long long m;
long long a[100005], b[100005];

long long prod(long long d) {
    long long s = 0;
    for (int i = 0; i < n; i++) {
        long long dd = d;
        long long lim = (b[i] + a[i] - 1) / a[i];
        if (dd > lim) dd = lim;
        long long p = dd * a[i];
        if (p > b[i]) p = b[i];
        s += p;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> m;
    long long ub = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        long long lim = (b[i] + a[i] - 1) / a[i];
        if (lim > ub) ub = lim;
    }
    if (prod(ub) < m) { cout << -1 << endl; return 0; }
    long long lo = 1, hi = ub, ans = ub;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (prod(mid) >= m) { ans = mid; hi = mid - 1; }
        else lo = mid + 1;
    }
    cout << ans << endl;
    return 0;
}
