#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct Movie { string name; int score; long long votes; int idx; };
Movie mv[100005];
bool cmp(const Movie& x, const Movie& y) {
    if (x.score != y.score) return x.score > y.score;
    if (x.votes != y.votes) return x.votes > y.votes;
    return x.name < y.name;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> mv[i].name >> mv[i].score >> mv[i].votes;
    sort(mv, mv + n, cmp);
    for (int i = 0; i < k; i++) cout << mv[i].name << "\n";
    return 0;
}
