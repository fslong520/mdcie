#include <iostream>
#include <cstring>
using namespace std;
int a[205], b[205], sq1[410], sq2[410], s[420];
int main() {
    char x[105], y[105];
    cin >> x >> y;
    int la = strlen(x), lb = strlen(y);
    for (int i = 0; i < la; i++) a[i] = x[la - 1 - i] - '0';
    for (int i = 0; i < lb; i++) b[i] = y[lb - 1 - i] - '0';
    // a^2
    for (int i = 0; i < la; i++)
        for (int j = 0; j < la; j++) {
            sq1[i + j] += a[i] * a[j];
            sq1[i + j + 1] += sq1[i + j] / 10;
            sq1[i + j] %= 10;
        }
    // b^2
    for (int i = 0; i < lb; i++)
        for (int j = 0; j < lb; j++) {
            sq2[i + j] += b[i] * b[j];
            sq2[i + j + 1] += sq2[i + j] / 10;
            sq2[i + j] %= 10;
        }
    int L = 0;
    for (int i = 0; i < 410; i++) {
        if (sq1[i]) L = i + 1;
        if (sq2[i]) L = max(L, i + 1);
    }
    int carry = 0;
    for (int i = 0; i < L || carry; i++) {
        int t = sq1[i] + sq2[i] + carry;
        s[i] = t % 10;
        carry = t / 10;
        if (i + 1 > L) L = i + 1;
    }
    bool lead = false;
    for (int i = L; i >= 0; i--) {
        if (s[i]) lead = true;
        if (lead) cout << s[i];
        if (i == 0 && !lead) { cout << 0; break; }
    }
    cout << endl;
    return 0;
}
