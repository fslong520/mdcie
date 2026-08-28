#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    long long a[100005];
    for (int i = 0; i < n; i++) cin >> a[i];
    long long *p = a, *q = a + n - 1;
    while (p < q) {
        long long t = *p; *p = *q; *q = t;
        p++; q--;
    }
    for (int i = 0; i < n; i++) cout << a[i] << (i == n-1 ? "\n" : " ");
    return 0;
}
