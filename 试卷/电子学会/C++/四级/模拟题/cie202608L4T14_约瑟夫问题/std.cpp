#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int a[5005] = {0};
    int out = 0, idx = 0, cnt;
    while (out < n - 1) {
        cnt = 0;
        while (cnt < m) {
            idx = idx % n + 1;
            if (a[idx] == 0) cnt++;
        }
        a[idx] = 1; out++;
    }
    for (int i = 1; i <= n; i++) if (a[i] == 0) { cout << i << endl; break; }
    return 0;
}