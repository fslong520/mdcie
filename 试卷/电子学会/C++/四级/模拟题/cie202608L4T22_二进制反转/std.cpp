#include <iostream>
using namespace std;

int main() {
    long long n, r = 0;
    cin >> n;
    while (n > 0) {
        r = (r << 1) | (n & 1);
        n >>= 1;
    }
    cout << r << endl;
    return 0;
}