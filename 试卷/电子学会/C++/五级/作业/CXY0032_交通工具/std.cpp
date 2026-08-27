#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ll N, A, B, C, D, E;
    cin >> N >> A >> B >> C >> D >> E;
    ll m = min({A, B, C, D, E});
    ll batch = (N + m - 1) / m;
    cout << batch + 4 << endl;
    return 0;
}
