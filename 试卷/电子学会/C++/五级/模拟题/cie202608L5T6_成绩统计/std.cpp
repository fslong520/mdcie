#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Stu {
    int id, a, b, c, sum;
};

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<Stu> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].id >> v[i].a >> v[i].b >> v[i].c;
        v[i].sum = v[i].a + v[i].b + v[i].c;
    }
    sort(v.begin(), v.end(), [](const Stu& x, const Stu& y) {
        if (x.sum != y.sum) return x.sum > y.sum;
        if (x.a != y.a) return x.a > y.a;
        return x.id < y.id;
    });
    for (auto& s : v) cout << s.id << " " << s.sum << "\n";
    return 0;
}