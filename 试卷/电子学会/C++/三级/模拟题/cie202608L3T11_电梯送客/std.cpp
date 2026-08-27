#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, cur = 1;
    long long ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int f;
        cin >> f;
        ans += abs(cur - f);
        cur = f;
    }
    cout << ans << endl;
    return 0;
}
