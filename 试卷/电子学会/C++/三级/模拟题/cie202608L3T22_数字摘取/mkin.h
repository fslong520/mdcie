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
    if (c == 1) { o << "a1b23c" << endl; return; }
    if (c == 2) { o << "xyz" << endl; return; }
    if (c == 3) { o << "0009" << endl; return; }
    if (c == 4) { o << "9" << endl; return; }
    int len = (int)rnd(1, 1000);
    if (c % 3 == 0) len = (int)rnd(1, 10);
    if (c % 4 == 2) len = 1000;
    string s;
    for (int i = 0; i < len; i++) {
        if (c % 2 == 1) s += (char)('0' + rnd(0, 9));          // 纯数字（含前导0，超long long）
        else s += (rnd(0, 1) ? (char)('a' + rnd(0, 25)) : (char)('0' + rnd(0, 9)));
    }
    if (c % 6 == 0) {                                          // 无数字的串
        s.clear();
        for (int i = 0; i < len; i++) s += (char)('a' + rnd(0, 25));
    }
    o << s << endl;
}
#endif
