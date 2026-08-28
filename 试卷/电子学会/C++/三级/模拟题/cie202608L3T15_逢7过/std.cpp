#include <iostream>
using namespace std;
bool has7(int x) { while (x) { if (x % 10 == 7) return true; x /= 10; } return false; }
int main() {
    int n; cin >> n;
    int cnt = 0;
    for (int i = 1; ; i++) {
        if (i % 7 != 0 && !has7(i)) { cnt++; if (cnt == n) { cout << i << endl; return 0; } }
    }
}