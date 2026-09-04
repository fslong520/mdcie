#include <bits/stdc++.h>
using namespace std;

long long hex2ll(const string& s) {
    long long v = 0;
    for (char c : s) {
        int d = (c >= '0' && c <= '9') ? c - '0' : c - 'A' + 10;
        v = v * 16 + d;
    }
    return v;
}

int main() {
    string a, b;
    cin >> a >> b;
    long long s = hex2ll(a) + hex2ll(b);
    const char *dig = "0123456789ABCDEF";
    if (s == 0) { cout << 0; return 0; }
    string out;
    while (s) { out = dig[s % 16] + out; s /= 16; }
    cout << out;
    return 0;
}