#include <iostream>
using namespace std;
int main() {
    char s[1005];
    cin.getline(s, 1005);
    int cnt = 0;
    bool inword = false;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            if (!inword) cnt++;
            inword = true;
        } else {
            inword = false;
        }
    }
    cout << cnt << endl;
    return 0;
}
