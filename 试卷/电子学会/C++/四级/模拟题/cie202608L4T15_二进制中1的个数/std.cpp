#include <iostream>
using namespace std;
int cnt1(int x) { int c = 0; while (x) { x &= x - 1; c++; } return c; }
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) { int x; cin >> x; cout << cnt1(x) << (i == n-1 ? "\n" : "\n"); }
    return 0;
}