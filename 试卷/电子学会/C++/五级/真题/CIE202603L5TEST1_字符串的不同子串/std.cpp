#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string s; cin >> s;
    set<string> ss;
    int n = s.length();
    for (int i = 0; i < n; i++)
        for (int j = 1; j <= n - i; j++)
            ss.insert(s.substr(i, j));
    cout << ss.size() << "\n";
    return 0;
}