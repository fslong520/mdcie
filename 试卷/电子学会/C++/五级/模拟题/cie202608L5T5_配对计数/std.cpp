#include <iostream>
using namespace std;

typedef long long ll;
ll a[100005];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; ll t;
    cin >> n >> t;
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1;
    ll ans = 0;
    while (l < r) {
        ll s = a[l] + a[r];
        if (s == t) { ans++; l++; r--; }
        else if (s < t) l++;
        else r--;
    }
    cout << ans << "\n";
    return 0;
}