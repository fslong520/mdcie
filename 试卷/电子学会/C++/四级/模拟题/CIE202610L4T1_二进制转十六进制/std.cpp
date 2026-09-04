#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s == "0") { cout << 0; return 0; }
    long long v = 0;
    // 串长 <= 32，值 <= 2^32-1 超出 int，用 long long 足够（2^63-1）
    for (char c : s) v = v * 2 + (c - '0');
    string out;
    const char *dig = "0123456789ABCDEF";
    while (v) { out = dig[v % 16] + out; v /= 16; }
    cout << out;
    return 0;
}