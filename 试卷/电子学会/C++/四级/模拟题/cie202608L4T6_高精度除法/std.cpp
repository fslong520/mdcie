#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    long long b;
    cin >> a >> b;
    string q = "";
    long long r = 0;
    for (int i = 0; i < a.size(); i++) {
        r = r * 10 + (a[i] - '0');
        int d = r / b;
        if (!(q.empty() && d == 0)) q += char('0' + d);
        r %= b;
    }
    if (q.empty()) q = "0";
    cout << q << endl;
    cout << r << endl;
    return 0;
}