#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> v = {1}; // 低位在前
    for (int i = 0; i < b; i++) {
        int carry = 0;
        for (size_t j = 0; j < v.size(); j++) {
            int t = v[j] * a + carry;
            v[j] = t % 10;
            carry = t / 10;
        }
        while (carry) { v.push_back(carry % 10); carry /= 10; }
    }
    // 十进制 -> 十六进制：反复除以 16
    const char *dig = "0123456789ABCDEF";
    string out;
    while (v.size() > 1 || v[0] != 0) {
        long long rem = 0;
        vector<int> q;
        for (int i = v.size() - 1; i >= 0; i--) {
            long long cur = rem * 10 + v[i];
            q.push_back((int)(cur / 16));
            rem = cur % 16;
        }
        reverse(q.begin(), q.end());
        while (q.size() > 1 && q.back() == 0) q.pop_back();
        out = dig[rem] + out;
        v = q;
    }
    cout << out;
    return 0;
}