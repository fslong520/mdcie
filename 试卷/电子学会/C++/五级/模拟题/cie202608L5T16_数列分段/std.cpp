#include <iostream>
using namespace std;
int n, m;
long long a[100005];
bool ok(long long x) {
    long long cur = 0; int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) return false;
        if (cur + a[i] > x) { cnt++; cur = a[i]; }
        else cur += a[i];
    }
    return cnt <= m;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> m;
    long long sum = 0;
    for (int i = 0; i < n; i++) { cin >> a[i]; sum += a[i]; }
    long long lo = 1, hi = sum, ans = sum;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (ok(mid)) { ans = mid; hi = mid - 1; }
        else lo = mid + 1;
    }
    cout << ans << endl;
    return 0;
}
