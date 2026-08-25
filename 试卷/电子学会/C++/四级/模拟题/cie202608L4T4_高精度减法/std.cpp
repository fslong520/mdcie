#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    if (a.size() != b.size()) return a.size() > b.size();
    return a >= b;
}

string sub(string a, string b) {
    string res = "";
    int i = a.size() - 1, j = b.size() - 1;
    int borrow = 0;
    while (i >= 0) {
        int da = a[i] - '0' - borrow;
        int db = (j >= 0) ? b[j] - '0' : 0;
        if (da < db) { da += 10; borrow = 1; }
        else borrow = 0;
        res += (da - db) + '0';
        i--; j--;
    }
    reverse(res.begin(), res.end());
    int k = 0;
    while (k < res.size() - 1 && res[k] == '0') k++;
    return res.substr(k);
}

int main() {
    string a, b;
    cin >> a >> b;
    if (cmp(a, b)) cout << sub(a, b) << endl;
    else cout << "-" << sub(b, a) << endl;
    return 0;
}