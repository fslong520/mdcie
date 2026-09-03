// 高精度斐波那契：F(n)，n<=1000
// 用两个 int 数组低位在前存储前两项，迭代相加（逐位加，处理进位）得到后一项。
// F(1000) 约 209 位，数组开 250 足够。
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << 1 << endl;
        return 0;
    }
    const int MAXL = 250;
    int a[MAXL] = {0}, b[MAXL] = {0}; // F(1)=1, F(2)=1
    a[0] = 1;
    b[0] = 1;
    for (int i = 3; i <= n; ++i) {
        int c[MAXL] = {0};
        int carry = 0;
        for (int j = 0; j < MAXL; ++j) {
            c[j] = a[j] + b[j] + carry;
            carry = c[j] / 10;
            c[j] %= 10;
        }
        // 前移：a<-b, b<-c
        for (int j = 0; j < MAXL; ++j) { a[j] = b[j]; b[j] = c[j]; }
    }
    int len = MAXL;
    while (len > 1 && b[len - 1] == 0) --len;
    for (int j = len - 1; j >= 0; --j) cout << b[j];
    cout << endl;
    return 0;
}