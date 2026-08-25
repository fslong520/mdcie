#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long a[100005];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    long long sum = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > m) {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
    return 0;
}