#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<pair<ll, ll>> seg(n);
    for (int i = 0; i < n; i++) cin >> seg[i].first >> seg[i].second;
    sort(seg.begin(), seg.end());
    int ans = 1;
    ll L = seg[0].first, R = seg[0].second;
    for (int i = 1; i < n; i++) {
        if (seg[i].first <= R) R = max(R, seg[i].second);
        else { ans++; L = seg[i].first; R = seg[i].second; }
    }
    cout << ans << "\n";
    return 0;
}