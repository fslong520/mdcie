#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll a[100005];
int n; ll k;

bool check(ll x) {
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += a[i] / x;
        if (cnt >= k) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> k;
    ll mx = 0;
    for (int i = 0; i < n; i++) { cin >> a[i]; mx = max(mx, a[i]); }
    ll lo = 1, hi = mx, ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (check(mid)) { ans = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    cout << ans << "\n";
    return 0;
}