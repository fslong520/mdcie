#include <bits/stdc++.h>
using namespace std;
char s[1005];
int main() {
    cin.getline(s, 1005);
    int n = strlen(s);
    bool inWord = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            inWord = false;
        } else {
            if (!inWord) s[i] = s[i] - 'a' + 'A';
            inWord = true;
        }
    }
    cout << s << endl;
    return 0;
}
