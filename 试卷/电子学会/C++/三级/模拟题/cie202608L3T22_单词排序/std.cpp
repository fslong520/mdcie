#include <bits/stdc++.h>
using namespace std;
char w[55][25];
int n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> w[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (strcmp(w[j], w[j + 1]) > 0) {
                char t[25];
                strcpy(t, w[j]);
                strcpy(w[j], w[j + 1]);
                strcpy(w[j + 1], t);
            }
    for (int i = 0; i < n; i++) cout << w[i] << endl;
    return 0;
}
