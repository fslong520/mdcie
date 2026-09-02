#include <bits/stdc++.h>
using namespace std;
char s[1005];
int main() {
    cin >> s;
    long long r = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] >= '0' && s[i] <= '9')
            r = (r * 10 + (s[i] - '0')) % 7;
    cout << r << endl;
    return 0;
}
