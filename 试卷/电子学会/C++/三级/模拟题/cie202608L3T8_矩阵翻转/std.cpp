#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
