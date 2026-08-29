#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    bool out[1005] = {false};
    int remain = n, cur = 0, printed = 0;
    while (remain > 0) {
        int cnt = 0;
        while (true) {
            cur = cur % n + 1;
            if (!out[cur]) {
                cnt++;
                if (cnt == m) break;
            }
        }
        out[cur] = true;
        remain--;
        printed++;
        cout << cur << (printed == n ? '\n' : ' ');
    }
    return 0;
}
