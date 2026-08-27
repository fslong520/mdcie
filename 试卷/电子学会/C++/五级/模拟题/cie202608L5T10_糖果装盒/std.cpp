#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll a[100005];

int main()
{
    int n, ans = 0;
    ll W;
    cin >> n >> W;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (l == r) { ans++; break; }
        if (a[l] + a[r] <= W) { ans++; l++; r--; }
        else { ans++; r--; }
    }
    cout << ans << endl;
    return 0;
}
