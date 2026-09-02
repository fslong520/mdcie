#pragma once
#ifndef MKIN_H
#define MKIN_H
#include <bits/stdc++.h>
using namespace std;
const int TEST_CASES = 25;
long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}
#define rnd rnd_ll
void test(int c, ofstream& o){
    srand(20260903 + c * 211);
    if (c == 1) { o << "4\nUUDR" << endl; return; }
    if (c == 2) { o << "3\nLRL" << endl; return; }
    if (c == 3) { o << "5\nUUULL" << endl; return; }
    if (c == 4) { o << "1\nD" << endl; return; }
    int n = rnd(1, 1000);
    if (c % 3 == 0) n = rnd(1, 10);
    if (c % 4 == 2) n = 1000;
    o << n << endl;
    string dir = "UDLR";
    for (int i = 0; i < n; i++) {
        int x = rnd(0, 3);
        if (c % 5 == 1) x = rnd(0, 1);    // 只上下，制造长直线
        if (c % 5 == 2) x = rnd(2, 3);    // 只左右
        o << dir[x];
    }
    o << endl;
}
#endif
