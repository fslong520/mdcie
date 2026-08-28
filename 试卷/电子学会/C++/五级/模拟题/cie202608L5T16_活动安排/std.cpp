#include <iostream>
#include <algorithm>
using namespace std;
struct Act { int s, e; };
bool cmp(Act a, Act b) { return a.e < b.e; }
int main() {
    int n; cin >> n;
    Act a[100005];
    for (int i = 0; i < n; i++) cin >> a[i].s >> a[i].e;
    sort(a, a + n, cmp);
    int cnt = 0, last = -1;
    for (int i = 0; i < n; i++) {
        if (a[i].s >= last) { cnt++; last = a[i].e; }
    }
    cout << cnt << endl;
    return 0;
}