#include <iostream>
using namespace std;

int h[100];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> h[i];
    // 若后面高于前面，需增加高度差的次数；若低于则不需
    int ans = h[0];
    for (int i = 1; i < n; i++) {
        int d = h[i] - h[i - 1];
        if (d > 0) ans += d;
    }
    cout << ans << endl;
    return 0;
}