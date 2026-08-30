#include <iostream>
#include <set>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    set<int> bk;
    while (n--) {
        int op, x;
        cin >> op;
        if (op == 3) {
            cout << (bk.empty() ? -1 : *bk.begin()) << "\n";
        } else {
            cin >> x;
            if (op == 1) bk.insert(x);
            else bk.erase(x);
        }
    }
    return 0;
}
