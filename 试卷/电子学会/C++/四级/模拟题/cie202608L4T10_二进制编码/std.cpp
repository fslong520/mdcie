#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0) { cout << 0 << endl; return 0; }
    vector<int> a;
    while (n > 0) { a.push_back(n % 2); n /= 2; }
    for (int i = a.size() - 1; i >= 0; i--) cout << a[i];
    cout << endl;
    return 0;
}
