#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        int d = a[i] - b[i];
        if (d < 0) d = -d;
        ans += d < 10 - d ? d : 10 - d;
    }
    cout << ans << endl;
    return 0;
}
