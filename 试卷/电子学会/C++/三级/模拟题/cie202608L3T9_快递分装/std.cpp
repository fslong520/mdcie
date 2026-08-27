#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int n, ans = 1;
    ll W, cur = 0, w;
    cin >> n >> W;
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        if (cur + w <= W) cur += w;
        else { ans++; cur = w; }
    }
    cout << ans << endl;
    return 0;
}
