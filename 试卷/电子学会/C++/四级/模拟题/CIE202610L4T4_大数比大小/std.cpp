#include <bits/stdc++.h>
using namespace std;

int cmp(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() < b.size() ? -1 : 1;
    if (a == b) return 0;
    return a < b ? -1 : 1;
}

int main() {
    string a, b;
    cin >> a >> b;
    int r = cmp(a, b);
    cout << (r > 0 ? '>' : r < 0 ? '<' : '=');
    return 0;
}