#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string mul(string a, int k)
{
    string r = "";
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int s = (a[i] - '0') * k + carry;
        r += char(s % 10 + '0');
        carry = s / 10;
    }
    while (carry) { r += char(carry % 10 + '0'); carry /= 10; }
    reverse(r.begin(), r.end());
    return r;
}

int main()
{
    string p;
    int k;
    cin >> p >> k;
    cout << mul(p, k) << endl;
    return 0;
}
