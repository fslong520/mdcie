#include <bits/stdc++.h>
using namespace std;

const string TAB[16] = {"0000","0001","0010","0011","0100","0101","0110","0111",
                        "1000","1001","1010","1011","1100","1101","1110","1111"};
const char *DIG = "0123456789ABCDEF";

string strip0(string s) {
    size_t p = s.find_first_not_of('0');
    return p == string::npos ? "0" : s.substr(p);
}

int main() {
    int k;
    string x;
    cin >> k >> x;
    if (k == 2) {
        // 二进制 -> 十六进制
        if (x == "0") { cout << 0; return 0; }
        long long v = 0;
        for (char c : x) v = v * 2 + (c - '0');   // 32位内 long long 足够
        string out;
        while (v) { out = DIG[v % 16] + out; v /= 16; }
        cout << out;
    } else {
        // 十六进制 -> 二进制
        string out;
        for (char c : x) {
            int v = (c >= '0' && c <= '9') ? c - '0' : c - 'A' + 10;
            out += TAB[v];
        }
        cout << strip0(out);
    }
    return 0;
}