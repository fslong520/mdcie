#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int prev = -1, ans = 0, pos = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            if (prev != -1 && pos - prev - 1 > ans) ans = pos - prev - 1;
            prev = pos;
        }
        n /= 2;
        pos++;
    }
    cout << ans << endl;
    return 0;
}
