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
    if (c == 1) { o << "aabbbcc" << endl; return; }
    if (c == 2) { o << "abc" << endl; return; }
    if (c == 3) { o << "zzzyy" << endl; return; }
    if (c == 4) { o << "aaaa" << endl; return; }
    int len = rnd(1, 1000);
    if (c % 3 == 0) len = rnd(1, 20);   // 部分小规模
    if (c % 4 == 0) len = 1000;          // 满长度
    for (int i = 0; i < len; i++) {
        int x = rnd(0, 25);
        if (c % 5 == 1) x = rnd(0, 2);    // 深度偏向少数几个字母
        if (c % 5 == 2) x = rnd(0, 4);
        o << (char)('a' + x);
    }
    o << endl;
}
#endif
