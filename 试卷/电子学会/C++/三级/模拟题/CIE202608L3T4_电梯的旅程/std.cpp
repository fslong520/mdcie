#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cur = 1, ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += abs(cur - x);
        cur = x;
    }
    cout << ans << endl;
    return 0;
}
