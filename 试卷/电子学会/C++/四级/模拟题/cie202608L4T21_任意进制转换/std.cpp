#include <iostream>
#include <string>
using namespace std;

char digit(int v) {
    if (v < 10) return '0' + v;
    return 'A' + v - 10;
}

int main() {
    long long n;
    int k;
    cin >> n >> k;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    string r = "";
    while (n > 0) {
        r = digit(n % k) + r;
        n /= k;
    }
    cout << r << endl;
    return 0;
}