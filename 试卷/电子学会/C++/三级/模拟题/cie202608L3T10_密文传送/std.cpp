#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int k;
    getline(cin, s);
    cin >> k;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c >= 'A' && c <= 'Z')
            c = (c - 'A' + k) % 26 + 'A';
        else if (c >= 'a' && c <= 'z')
            c = (c - 'a' + k) % 26 + 'a';
        cout << c;
    }
    cout << endl;
    return 0;
}
