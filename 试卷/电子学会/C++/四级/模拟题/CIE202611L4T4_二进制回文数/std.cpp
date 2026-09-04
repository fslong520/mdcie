#include <bits/stdc++.h>
using namespace std;

bool pal(int m) {
    string s;
    while (m) { s += char('0' + (m & 1)); m >>= 1; }
    // s 为低位在前，回文判定不受顺序影响
    string r(s.rbegin(), s.rend());
    return s == r;
}

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int m = 1; m <= n; m++) if (pal(m)) cnt++;
    cout << cnt;
    return 0;
}