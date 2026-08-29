#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int bits[40], k = 0;
    while (n > 0) {
        bits[k++] = n % 2;
        n /= 2;
    }
    bool ok = true;
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        if (bits[i] != bits[j]) { ok = false; break; }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
