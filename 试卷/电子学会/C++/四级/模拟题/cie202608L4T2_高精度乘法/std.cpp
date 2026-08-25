#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    vector<int> A, B, res(a.size() + b.size() + 1, 0);
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
    for (int i = 0; i < A.size(); i++)
        for (int j = 0; j < B.size(); j++)
            res[i + j] += A[i] * B[j];
    for (int i = 0; i < res.size(); i++)
        if (res[i] >= 10) {
            res[i + 1] += res[i] / 10;
            res[i] %= 10;
        }
    int k = res.size() - 1;
    while (k > 0 && res[k] == 0) k--;
    for (int i = k; i >= 0; i--) cout << res[i];
    cout << endl;
    return 0;
}