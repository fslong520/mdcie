#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string best = "0";
    long long bv = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        long long v = 0;
        for (char c : s) {
            int d = (c >= '0' && c <= '9') ? c - '0' : c - 'A' + 10;
            v = v * 16 + d;
        }
        if (i == 0 || v > bv) { bv = v; best = s; }
    }
    cout << best;
    return 0;
}