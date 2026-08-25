#include <iostream>
#include <string>
using namespace std;

string a[1000], b[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> a[i]; b[i] = a[i]; }
    // 顺时针旋转 90°：a[i][j] => b[j][n-1-i]
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[j][n - 1 - i] = a[i][j];
    for (int i = 0; i < n; i++) cout << b[i] << endl;
    return 0;
}