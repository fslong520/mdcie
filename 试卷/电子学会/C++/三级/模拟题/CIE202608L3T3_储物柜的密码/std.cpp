#include <iostream>
#include <string>
using namespace std;

int main() {
    int key[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int cnt[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    string s;
    cin >> s;
    for (int i = 0; i < (int)s.size(); i++) {
        if (i) cout << " ";
        int idx = s[i] - 'a';
        for (int j = 0; j < cnt[idx]; j++) cout << key[idx];
    }
    cout << endl;
    return 0;
}
