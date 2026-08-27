#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> add(vector<int> a, vector<int> b)
{
    vector<int> r;
    int carry = 0, i = 0;
    while (i < a.size() || i < b.size() || carry)
    {
        int s = carry;
        if (i < a.size()) s += a[i];
        if (i < b.size()) s += b[i];
        r.push_back(s % 10);
        carry = s / 10;
        i++;
    }
    return r;
}

vector<int> mul(vector<int> a, int k)
{
    vector<int> r;
    int carry = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int s = a[i] * k + carry;
        r.push_back(s % 10);
        carry = s / 10;
    }
    while (carry) { r.push_back(carry % 10); carry /= 10; }
    return r;
}

int main()
{
    int n;
    cin >> n;
    vector<int> sum(1, 0), term(1, 1);
    for (int i = 1; i <= n; i++)
    {
        term = mul(term, i);
        sum = add(sum, term);
    }
    for (int i = sum.size() - 1; i >= 0; i--) cout << sum[i];
    cout << endl;
    return 0;
}
