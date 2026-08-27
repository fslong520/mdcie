#include <iostream>
using namespace std;

int a[100005];

int main()
{
    int n, x, ans = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] + a[r] == x) { ans++; l++; r--; }
        else if (a[l] + a[r] < x) l++;
        else r--;
    }
    cout << ans << endl;
    return 0;
}
