#include <bits/stdc++.h>
using namespace std;

vector<int> mul_small(vector<int> a, int k) {
    long long carry = 0;
    for (size_t i = 0; i < a.size(); i++) {
        long long t = (long long)a[i] * k + carry;
        a[i] = t % 10;
        carry = t / 10;
    }
    while (carry) { a.push_back(carry % 10); carry /= 10; }
    return a;
}

vector<int> add(const vector<int>& a, const vector<int>& b) {
    vector<int> c(max(a.size(), b.size()) + 1, 0);
    for (size_t i = 0; i < c.size(); i++) {
        if (i < a.size()) c[i] += a[i];
        if (i < b.size()) c[i] += b[i];
    }
    for (size_t i = 0; i + 1 < c.size(); i++) { c[i+1] += c[i] / 10; c[i] %= 10; }
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> fac = {1}, sum = {0};
    for (int i = 1; i <= n; i++) {
        fac = mul_small(fac, i);
        sum = add(sum, fac);
    }
    for (int i = sum.size() - 1; i >= 0; i--) cout << sum[i];
    return 0;
}