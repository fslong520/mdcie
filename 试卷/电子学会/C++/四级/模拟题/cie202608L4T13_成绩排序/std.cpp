#include <iostream>
#include <string>
using namespace std;
struct Stu { string name; int a, b, c, sum; };
int main() {
    int n; cin >> n;
    Stu s[1005];
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c;
        s[i].sum = s[i].a + s[i].b + s[i].c;
    }
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-1-i; j++)
            if (s[j].sum < s[j+1].sum || (s[j].sum == s[j+1].sum && s[j].name > s[j+1].name))
                swap(s[j], s[j+1]);
    for (int i = 0; i < n; i++) cout << s[i].name << " " << s[i].sum << endl;
    return 0;
}