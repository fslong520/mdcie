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
    if (c == 1) { o << "1 10 1" << endl; return; }
    if (c == 2) { o << "20 20 2" << endl; return; }
    if (c == 3) { o << "1 5 3" << endl; return; }
    if (c == 4) { o << "1 1 1" << endl; return; }
    long long L = rnd(1, 100000), R = rnd(L, 100000);
    if (c % 3 == 0) { L = rnd(1, 50); R = rnd(L, 200); }   // 小区间
    if (c % 4 == 1) { L = 1; R = 100000; }                  // 全区间
    if (c % 5 == 2) { R = L + rnd(0, 20); }                 // 极小区间
    long long k = rnd(0, 54);
    if (c % 5 == 3) k = rnd(0, 9);           // 个位和
    if (c % 5 == 4) k = rnd(40, 54);         // 超大和，通常没解
    o << L << " " << R << " " << k << endl;
}
#endif
