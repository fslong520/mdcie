#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s = n * (n + 1) / 2;          // n ≤ 30000，s ≤ 4.5×10^8，long long 安全
    // 高精度：s × s（竖式，乘数固定为 s 自身）
    vector<int> a;
    long long t = s;
    while (t) { a.push_back(t % 10); t /= 10; }
    vector<long long> c(a.size() * 2, 0);
    for (size_t i = 0; i < a.size(); i++)
        for (size_t j = 0; j < a.size(); j++)
            c[i + j] += (long long)a[i] * a[j];
    for (size_t i = 0; i + 1 < c.size(); i++) { c[i+1] += c[i] / 10; c[i] %= 10; }
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    for (int i = c.size() - 1; i >= 0; i--) cout << c[i];
    cout << endl;
    return 0;
}