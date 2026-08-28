#include <iostream>
#include <map>
using namespace std;
int main() {
    int n; cin >> n;
    map<long long, int> m;
    while (n--) { long long x; cin >> x; m[x]++; }
    for (auto &p : m) cout << p.first << " " << p.second << "\n";
    return 0;
}