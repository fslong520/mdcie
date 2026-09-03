// 异或前缀和：求 1^2^3^...^n
// 规律：n%4==0 -> n ; n%4==1 -> 1 ; n%4==2 -> n+1 ; n%4==3 -> 0
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if (n % 4 == 0) cout << n << endl;
    else if (n % 4 == 1) cout << 1 << endl;
    else if (n % 4 == 2) cout << n + 1 << endl;
    else cout << 0 << endl;
    return 0;
}
