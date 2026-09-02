#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long day = 1; // 第1天存1元
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += day; // 累加当天存的钱
        day *= 2;   // 下一天是今天的2倍
    }
    cout << sum << endl;
    return 0;
}
