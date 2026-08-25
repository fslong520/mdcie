#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> cnt;
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        cnt[w]++;
    }
    vector<pair<int, string>> v;
    for (auto& p : cnt) v.push_back({p.second, p.first});
    sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });
    for (auto& p : v) cout << p.second << " " << p.first << endl;
    return 0;
}