#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
