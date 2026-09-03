// 奇偶位交换：把 n 的二进制中相邻的奇偶位互换
// 偶位(bit0,2,4...)左移一位、奇位(bit1,3,5...)右移一位，再或起来
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    // 0x5555... = 0101... (偶位保留), 0xAAAA... = 1010... (奇位保留)
    long long even = (n & 0x5555555555555555LL) << 1;  // 偶位移到奇位
    long long odd  = (n & 0xAAAAAAAAAAAAAAAALL) >> 1;  // 奇位移到偶位
    cout << (even | odd) << endl;
    return 0;
}
