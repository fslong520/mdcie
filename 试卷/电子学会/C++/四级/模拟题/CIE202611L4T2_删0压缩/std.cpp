#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long v = 0;
    while (n) {
        if (n & 1) v = v * 2 + 1;
        n >>= 1;
    }
    cout << v;
    return 0;
}