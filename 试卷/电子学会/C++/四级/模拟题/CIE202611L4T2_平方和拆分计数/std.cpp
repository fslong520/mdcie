#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long cnt = 0;
    for (long long a = 0; a * a * 2 <= n; a++) {
        long long b2 = n - a * a;
        long long b = (long long)sqrtl((long double)b2);
        while (b * b > b2) b--;
        while ((b + 1) * (b + 1) <= b2) b++;
        if (b >= a && b * b == b2) cnt++;
    }
    cout << cnt;
    return 0;
}