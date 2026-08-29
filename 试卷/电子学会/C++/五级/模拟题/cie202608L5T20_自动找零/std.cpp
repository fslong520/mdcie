#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T;
    cin >> T;
    int c[5] = {100, 50, 10, 5, 1};
    while (T--) {
        long long m, ans = 0;
        cin >> m;
        for (int i = 0; i < 5; i++) {
            ans += m / c[i];
            m %= c[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
