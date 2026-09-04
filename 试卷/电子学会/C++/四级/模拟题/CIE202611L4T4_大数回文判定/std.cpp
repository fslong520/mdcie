#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string r(s.rbegin(), s.rend());
    cout << (s == r ? "Yes" : "No");
    return 0;
}