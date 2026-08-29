#include <iostream>
using namespace std;
long long a[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    long long s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    long long sum = 0;
    int ans = n + 1, l = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum - a[l] >= s && l <= r) { sum -= a[l]; l++; }
        while (sum >= s) {
            if (r - l + 1 < ans) ans = r - l + 1;
            sum -= a[l];
            l++;
        }
    }
    if (ans == n + 1) ans = 0;
    cout << ans << endl;
    return 0;
}
