#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    long long v = 0;
    for (char c : s) {
        int d = (c >= '0' && c <= '9') ? c - '0' : c - 'A' + 10;
        v = v * 16 + d;
    }
    const char *dig = "0123456789ABCD";
    if (v == 0) { cout << 0; return 0; }
    string out;
    while (v) { out = dig[v % 14] + out; v /= 14; }
    cout << out;
    return 0;
}