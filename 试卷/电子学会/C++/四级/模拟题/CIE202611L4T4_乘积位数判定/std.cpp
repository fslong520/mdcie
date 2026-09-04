#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int p = a.size(), q = b.size();
    // 位数 = p+q 或 p+q-1：用 a 的最高位 × b 的最高位 是否 ≥ 10... 精确法：
    // 等价于判断 a*b < 10^(p+q-1)，即 (a/10^(p-1)) * (b/10^(q-1)) < 10 时可能 p+q-1，
    // 但还需排除 a*b ≥ 10^(p+q-1) 中"首位积=9 尾数进位"的情形。稳妥：用长整型比较首部。
    // 简化精确法：取 a、b 的前 18 位有效数字转 long long 相乘是否 < 10^(p+q-1)。
    // ——直接用大数乘法做一次也可（500位×500位=25万次乘，轻松）。
    vector<int> A, B;
    for (int i = p - 1; i >= 0; i--) A.push_back(a[i] - '0');
    for (int j = q - 1; j >= 0; j--) B.push_back(b[j] - '0');
    vector<long long> c(p + q, 0);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            c[i + j] += (long long)A[i] * B[j];
    for (int i = 0; i + 1 < p + q; i++) { c[i+1] += c[i] / 10; c[i] %= 10; }
    int digits = p + q;
    while (digits > 1 && c[digits - 1] == 0) digits--;
    cout << digits;
    return 0;
}