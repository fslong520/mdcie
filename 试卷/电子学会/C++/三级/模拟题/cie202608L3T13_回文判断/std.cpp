#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[255]; cin >> s;
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) { cout << "NO" << endl; return 0; }
    }
    cout << "YES" << endl;
    return 0;
}