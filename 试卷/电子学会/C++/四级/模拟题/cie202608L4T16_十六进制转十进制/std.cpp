#include <iostream>
#include <string>
using namespace std;
int main() {
    string s; cin >> s;
    long long ans = 0;
    for (char c : s) {
        ans = ans * 16;
        if (c >= '0' && c <= '9') ans += c - '0';
        else ans += c - 'A' + 10;
    }
    cout << ans << endl;
    return 0;
}