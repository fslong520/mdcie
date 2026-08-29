#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int neg = 0;
    if (n < 0) { neg = 1; n = -n; }
    long long r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    if (neg) r = -r;
    cout << r << endl;
    return 0;
}
