#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int p = 1, t = i;
        while (t) { p *= 10; t /= 10; }
        if ((long long)i * i % p == i) cout << i << endl;
    }
    return 0;
}
