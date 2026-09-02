#include <bits/stdc++.h>
using namespace std;
int main() {
    long long g, r, pos;
    cin >> g >> r >> pos;
    long long cyc = g + r;
    long long m = pos % cyc;             // 到达路口时处在本周期第 m 秒
    if (m < g) cout << pos << endl;      // 绿灯，直接通过
    else cout << pos + (cyc - m) << endl; // 红灯，等到本周期末（即绿灯亮起）
    return 0;
}
