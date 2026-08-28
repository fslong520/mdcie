#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int a[105][105];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) cout << a[i][j] << (i == n-1 ? "\n" : " ");
    }
    return 0;
}