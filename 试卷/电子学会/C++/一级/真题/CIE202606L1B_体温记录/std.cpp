#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) { // W 和 N-1 个变化量一起读入
        int a;
        cin >> a;
        w += a;   // 前一天 + 变化量
        if (w >= 3600 && w <= 3700) ans++;
    }
    cout << ans;
    return 0;
}