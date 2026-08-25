#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }
    string ans = "";
    while (n > 0) {
        int r = n % 16;
        if (r < 10) ans = char('0' + r) + ans;
        else ans = char('A' + r - 10) + ans;
        n /= 16;
    }
    cout << ans << endl;
    return 0;
}