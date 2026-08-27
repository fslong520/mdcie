#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(1, 1);
    for (int t = 0; t < n; t++)
    {
        int carry = 0;
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = a[i] * 2 + carry;
            carry = a[i] / 10;
            a[i] %= 10;
        }
        if (carry) a.push_back(carry);
    }
    for (int i = a.size() - 1; i >= 0; i--) cout << a[i];
    cout << endl;
    return 0;
}
