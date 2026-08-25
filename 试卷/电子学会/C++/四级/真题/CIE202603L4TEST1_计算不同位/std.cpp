#include <iostream>
using namespace std;

int main() {
    int n, m, ans = 0;
    unsigned int mask = 1;
    cin >> n >> m;
    for (int i = 0; i < 32; i++) {
        if ((n & mask) != (m & mask)) ans++;
        mask <<= 1;
    }
    cout << ans;
    return 0;
}