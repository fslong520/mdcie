#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<long long> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    long long ans = 0;
    int r = 1;
    for (int i = 0; i < n; i++) {
        if (r < i + 1) r = i + 1;
        while (r < n && x[r] - x[i] <= d) r++;
        ans += (r - 1 - i);
    }
    cout << ans << endl;
    return 0;
}