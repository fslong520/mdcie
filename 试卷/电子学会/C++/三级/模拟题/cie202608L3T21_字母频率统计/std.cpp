#include <bits/stdc++.h>
using namespace std;
string s;
int cnt[26];
int main() {
    cin >> s;
    for (char c : s) cnt[c - 'a']++;
    int mx = 0, mi = 0;
    for (int i = 0; i < 26; i++)
        if (cnt[i] > mx) { mx = cnt[i]; mi = i; }
    cout << (char)('a' + mi) << ":" << mx << endl;
    return 0;
}
