#include <iostream>
#include <string>
using namespace std;
int val(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    return c - 'A' + 10;
}
char ch(int v) {
    if (v < 10) return '0' + v;
    return 'A' + v - 10;
}
int main() {
    char t;
    string s;
    cin >> t >> s;
    long long v = 0;
    if (t == 'B') {
        for (int i = 0; i < (int)s.size(); i++) v = v * 2 + (s[i] - '0');
        if (v == 0) { cout << 0 << endl; return 0; }
        string r = "";
        while (v > 0) { r = ch(v % 16) + r; v /= 16; }
        cout << r << endl;
    } else {
        for (int i = 0; i < (int)s.size(); i++) v = v * 16 + val(s[i]);
        if (v == 0) { cout << 0 << endl; return 0; }
        string r = "";
        while (v > 0) { r = char('0' + v % 2) + r; v /= 2; }
        cout << r << endl;
    }
    return 0;
}
