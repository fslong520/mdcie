#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int a = 0; a * a <= n; a++) {
        for (int b = a; a * a + b * b <= n; b++) {
            for (int c = b; a * a + b * b + c * c <= n; c++) {
                int left = n - a * a - b * b - c * c;
                int d = (int)sqrt(left);
                if (d * d == left && d >= c)
                    cout << a << " " << b << " " << c << " " << d << endl;
            }
        }
    }
    return 0;
}