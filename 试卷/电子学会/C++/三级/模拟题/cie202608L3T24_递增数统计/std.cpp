#include <bits/stdc++.h>
using namespace std;
bool inc(int x) {
    int last = 10;
    while (x) {
        int d = x % 10;
        if (d >= last) return false;
        last = d;
        x /= 10;
    }
    return true;
}
int main() {
    int L, R, cnt = 0;
    cin >> L >> R;
    for (int x = L; x <= R; x++)
        if (inc(x)) cnt++;
    cout << cnt << endl;
    return 0;
}
