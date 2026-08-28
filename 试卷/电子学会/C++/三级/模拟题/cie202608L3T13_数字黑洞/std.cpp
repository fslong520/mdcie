#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n; cin >> n;
    if (n == 495) { cout << 0 << endl; return 0; }
    int cnt = 0;
    while (n != 495) {
        string s = to_string(n);
        while (s.size() < 3) s = "0" + s;
        sort(s.begin(), s.end());
        int asc = stoi(s);
        reverse(s.begin(), s.end());
        int desc = stoi(s);
        n = desc - asc;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}