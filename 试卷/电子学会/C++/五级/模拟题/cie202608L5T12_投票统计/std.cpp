#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    map<string,int> mp;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> s; mp[s]++; }
    vector<pair<int,string>> v;
    for (auto &p : mp) v.push_back({-p.second, p.first});
    sort(v.begin(), v.end());
    for (auto &p : v) cout << p.second << " " << -p.first << endl;
    return 0;
}
