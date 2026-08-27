#include <iostream>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    while (n--)
    {
        cin >> x;
        cout << ((x >> k) & 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
