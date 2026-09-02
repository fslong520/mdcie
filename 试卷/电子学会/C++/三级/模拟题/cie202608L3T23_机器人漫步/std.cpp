#include <bits/stdc++.h>
using namespace std;
int n;
bool vis[2210][2210];
int main() {
    cin >> n;
    string s;
    cin >> s;
    int x = 1100, y = 1100;
    vis[x][y] = true;
    int cnt = 1;
    for (char c : s) {
        if (c == 'U') y++;
        else if (c == 'D') y--;
        else if (c == 'L') x--;
        else x++;
        if (!vis[x][y]) { vis[x][y] = true; cnt++; }
    }
    cout << cnt << endl;
    return 0;
}
