#include <iostream>
#include <cmath>
using namespace std;
bool isp(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) if (x % i == 0) return false;
    return true;
}
int main() {
    int n; cin >> n;
    int cnt = 0;
    for (int i = 2; i <= n; i++) if (isp(i)) cnt++;
    cout << cnt << endl;
    return 0;
}