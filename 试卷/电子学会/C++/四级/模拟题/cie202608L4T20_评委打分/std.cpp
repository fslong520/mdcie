#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mx = -1, mn = 101;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        if (x > mx) mx = x;
        if (x < mn) mn = x;
    }
    double avg = (double)(sum - mx - mn) / (n - 2);
    printf("%.2f\n", avg);
    return 0;
}
