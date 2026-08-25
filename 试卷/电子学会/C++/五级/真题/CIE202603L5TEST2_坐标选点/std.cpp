#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
int n, c; ll m;
ll a[1000005];

bool check(ll D) {
    ll last = 0;      // 起点 0 处已建站
    int placed = 0;
    for (int i = 0; i < n; i++)
        // 距上一站 ≥ D，且选后仍能保证终点 m 可达，才选
        if (a[i] - last >= D && m - a[i] >= D) { last = a[i]; placed++; }
    if (m - last < D) return false;   // 终点 m 必须可达
    return placed >= c;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> c >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll lo = 1, hi = m, ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (check(mid)) { ans = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    cout << ans << "\n";
    return 0;
}