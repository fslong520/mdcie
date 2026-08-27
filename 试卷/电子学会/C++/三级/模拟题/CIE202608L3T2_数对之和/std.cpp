#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    bool found = false;
    for (int a = 1; a <= n; a++) {
        int b = k - a;
        if (b > a && b <= n) {
            cout << a << " " << b << endl;
            found = true;
        }
    }
    if (!found) cout << "none" << endl;
    return 0;
}
