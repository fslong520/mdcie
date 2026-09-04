#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int ans = 0, zeros = -1; // zeros: 当前段连续0计数，-1 表示尚未遇到第一个1
    while (n) {
        if (n & 1) {
            if (zeros >= 0) ans = max(ans, zeros);
            zeros = 0;
        } else if (zeros >= 0) {
            zeros++;
        }
        n >>= 1;
    }
    cout << ans;
    return 0;
}