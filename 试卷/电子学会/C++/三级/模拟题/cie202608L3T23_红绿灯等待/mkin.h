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
    if (c == 1) { o << "5 3 4" << endl; return; }            // 4%8=4 绿 -> 共4
    if (c == 2) { o << "10 3 10" << endl; return; }          // 10%13=10 红 -> 13
    if (c == 3) { o << "7 3 1000000000" << endl; return; }
    if (c == 4) { o << "1 1 1" << endl; return; }
    long long g, r;
    if (c % 2 == 1) { g = rnd(1, 100); r = rnd(1, 100); }
    else            { g = rnd(1, 100000); r = rnd(1, 100000); }
    if (c % 5 == 0) { g = 1; r = 1; }
    long long pos = rnd(1, 1000000000);
    o << g << " " << r << " " << pos << endl;
}
#endif
