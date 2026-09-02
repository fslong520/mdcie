#include <iostream>
using namespace std;

int main()
{
    long long h, m;
    cin >> h >> m;
    long long t = h + (m > 0 ? 1 : 0); // 不足1小时按1小时，向上取整
    long long fee;
    if (t <= 2)
        fee = t * 5; // 前2小时每小时5元
    else
        fee = 2 * 5 + (t - 2) * 8; // 超过2小时部分每小时8元
    cout << fee << endl;
    return 0;
}
