#include <iostream>
#include <algorithm>
using namespace std;

int a[100005];

int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    int idx = lower_bound(a, a + n, x) - a;
    int ans;
    if (idx == 0) ans = a[0];
    else if (idx == n) ans = a[n - 1];
    else
    {
        int d1 = a[idx] - x, d2 = x - a[idx - 1];
        if (d2 <= d1) ans = a[idx - 1];
        else ans = a[idx];
    }
    cout << ans << endl;
    return 0;
}
