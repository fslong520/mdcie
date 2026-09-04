#include <bits/stdc++.h>
using namespace std;

string add(const string& A, const string& B) {
    string r;
    int i = A.size() - 1, j = B.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int t = carry;
        if (i >= 0) t += A[i--] - '0';
        if (j >= 0) t += B[j--] - '0';
        r += char('0' + t % 10);
        carry = t / 10;
    }
    reverse(r.begin(), r.end());
    return r;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    cout << add(add(a, b), c);
    return 0;
}