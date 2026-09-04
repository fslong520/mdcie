#include <bits/stdc++.h>
using namespace std;

int main() {
    string A;
    int d;
    cin >> A >> d;
    if (d == 0) { cout << 0; return 0; }
    vector<int> a;
    for (int i = A.size() - 1; i >= 0; i--) a.push_back(A[i] - '0');
    int carry = 0;
    for (size_t i = 0; i < a.size(); i++) {
        int t = a[i] * d + carry;
        a[i] = t % 10;
        carry = t / 10;
    }
    while (carry) { a.push_back(carry % 10); carry /= 10; }
    while (a.size() > 1 && a.back() == 0) a.pop_back();
    for (int i = a.size() - 1; i >= 0; i--) cout << a[i];
    return 0;
}