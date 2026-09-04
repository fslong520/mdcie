#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    const string tab[16] = {"0000","0001","0010","0011","0100","0101","0110","0111",
                            "1000","1001","1010","1011","1100","1101","1110","1111"};
    string out;
    for (char c : s) {
        int v = (c >= '0' && c <= '9') ? c - '0' : c - 'A' + 10;
        out += tab[v];
    }
    size_t p = out.find_first_not_of('0');
    if (p == string::npos) cout << 0;
    else cout << out.substr(p);
    return 0;
}