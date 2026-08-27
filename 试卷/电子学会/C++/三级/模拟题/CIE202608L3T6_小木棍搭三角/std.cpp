#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int a = 1; a <= n; a++)
        for (int b = a; b <= n; b++)
            for (int c = b; c <= n; c++)
                if (a + b > c) cnt++;
    cout << cnt << endl;
    return 0;
}
