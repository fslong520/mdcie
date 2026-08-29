#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[505], b[505];
    int x[505] = {0}, y[505] = {0}, z[510] = {0};
    cin >> a >> b;
    int la = strlen(a), lb = strlen(b);
    for (int i = 0; i < la; i++) x[i] = a[la - 1 - i] - '0';
    for (int i = 0; i < lb; i++) y[i] = b[lb - 1 - i] - '0';
    int lm = la > lb ? la : lb;
    int carry = 0;
    for (int i = 0; i < lm; i++) {
        z[i] = x[i] + y[i] + carry;
        carry = z[i] / 10;
        z[i] %= 10;
    }
    int lz = lm;
    if (carry) z[lz++] = carry;
    if (lz == 0) { cout << 0 << endl; return 0; }
    for (int i = lz - 1; i >= 0; i--) cout << z[i];
    cout << endl;
    return 0;
}
