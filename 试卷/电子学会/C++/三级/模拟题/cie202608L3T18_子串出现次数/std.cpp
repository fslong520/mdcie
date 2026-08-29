#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[1005], t[105];
    cin.getline(s, 1005);
    cin.getline(t, 105);
    int cnt = 0;
    char *p = s;
    int len = strlen(t);
    while ((p = strstr(p, t)) != NULL) {
        cnt++;
        p += len;
    }
    cout << cnt << endl;
    return 0;
}
