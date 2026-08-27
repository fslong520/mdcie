#include <iostream>
#include <string>
using namespace std;

int main()
{
    int k;
    string s;
    cin >> k >> s;
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int d;
        if (s[i] >= '0' && s[i] <= '9') d = s[i] - '0';
        else d = s[i] - 'A' + 10;
        ans = ans * k + d;
    }
    cout << ans << endl;
    return 0;
}
