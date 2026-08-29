#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int mask = 0;
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        mask ^= (1 << k);
    }
    for (int i = 0; i < n; i++) {
        cout << ((mask >> i) & 1) << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
