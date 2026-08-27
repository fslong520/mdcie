#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int n, m, ans = 0;
    string s;
    set<string> st;
    cin >> n >> m;
    for (int i = 0; i < n; i++) { cin >> s; st.insert(s); }
    for (int i = 0; i < m; i++) { cin >> s; if (st.count(s)) ans++; }
    cout << ans << endl;
    return 0;
}
