#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    vector<int> a, b;
    for (int i = A.size() - 1; i >= 0; i--) a.push_back(A[i] - '0');
    for (int i = B.size() - 1; i >= 0; i--) b.push_back(B[i] - '0');
    vector<long long> c(a.size() + b.size(), 0);
    for (size_t i = 0; i < a.size(); i++)
        for (size_t j = 0; j < b.size(); j++)
            c[i + j] += (long long)a[i] * b[j];
    for (size_t i = 0; i + 1 < c.size(); i++) { c[i+1] += c[i] / 10; c[i] %= 10; }
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    // 十进制大数（低位在前）转十六进制：反复除以16
    const char *dig = "0123456789ABCDEF";
    string out;
    vector<int> v(c.begin(), c.end());
    while (v.size() > 1 || v[0] != 0) {
        long long rem = 0;
        vector<int> q;
        for (int i = v.size() - 1; i >= 0; i--) {
            long long cur = rem * 10 + v[i];
            q.push_back(cur / 16);
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