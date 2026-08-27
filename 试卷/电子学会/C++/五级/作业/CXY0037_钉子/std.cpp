#include <iostream>
#include <algorithm>
using namespace std;

struct P { int l, r; } a[3005];

bool cmp(P x, P y) { return x.r < y.r; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i].l >> a[i].r;
        sort(a, a + n, cmp);
        int ans = 0, cur = -1;
        for (int i = 0; i < n; i++) {
            if (cur < a[i].l) { ans++; cur = a[i].r; }
        }
        cout << ans << endl;
    }
    return 0;
}
