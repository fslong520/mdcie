// 高精度阶乘：n! ，n<=500
// 大数 int 数组 a 低位在前（a[0] 为个位），每次把整个大数乘以因子 i，逐位乘再处理进位。
// 500! 约 1135 位，数组开 2000 足够。
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(2000, 0);
    a[0] = 1;
    // 从数组长度（有效位数）角度维护，避免每次遍历整个数组
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < (int)a.size(); ++j)
            a[j] *= i;            // 每个位乘因子
        for (int j = 0; j < (int)a.size() - 1; ++j) {
            a[j + 1] += a[j] / 10; // 处理进位
            a[j] %= 10;
        }
    }
    int len = (int)a.size();
    while (len > 1 && a[len - 1] == 0) --len; // 去掉前导零
    for (int j = len - 1; j >= 0; --j)
        cout << a[j];
    cout << endl;
    return 0;
}