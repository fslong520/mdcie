#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        if (x > 0 && (x & (x - 1)) == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}