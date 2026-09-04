#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    long long n;
    cin >> k >> n;
    const char *dig = "0123456789ABCDEF";
    string s;
    if (n == 0) s = "0";
    while (n) { s += dig[n % k]; n /= k; }  // 低位在前
    string r(s.rbegin(), s.rend());
    cout << (s == r ? "Yes" : "No");       // 回文判定与顺序无关
    return 0;
}