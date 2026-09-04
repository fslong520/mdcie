#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    vector<int> a, b;
    while (m) { a.push_back(m & 1); m >>= 1; }
    while (n) { b.push_back(n & 1); n >>= 1; }
    int L = max(a.size(), b.size());
    a.resize(L, 0);   // 高位补 0
    b.resize(L, 0);
    int same = 0;
    for (int i = 0; i < L; i++) if (a[i] == b[i]) same++;
    cout << same;
    return 0;
}