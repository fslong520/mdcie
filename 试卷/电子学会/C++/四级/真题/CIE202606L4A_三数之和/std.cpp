#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBig(string a, string b) {
    int i = a.size() - 1, j = b.size() - 1;
    int carry = 0;
    string result = "";
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += (sum % 10) + '0';
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string ans = addBig(addBig(a, b), c);
    cout << ans << endl;
    return 0;
}