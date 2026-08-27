#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll l = 0, r = n, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (mid <= n / mid) { ans = mid; l = mid + 1; }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
