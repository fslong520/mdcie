#include <bits/stdc++.h>
using namespace std;
int main() {
    int L, R, k;
    cin >> L >> R >> k;
    int cnt = 0;
    for (int i = L; i <= R; i++) {
        int s = 0, x = i;
        while (x) { s += x % 10; x /= 10; }
        if (s == k) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
