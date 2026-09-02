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
    if (c == 1) { o << "hello world" << endl; return; }
    if (c == 2) { o << "i am  a student" << endl; return; }
    if (c == 3) { o << "abc" << endl; return; }
    if (c == 4) { o << "x" << endl; return; }
    if (c == 5) { o << "  ab  cd  " << endl; return; }      // 行首+行尾+连续空格
    if (c == 6) { o << "     " << endl; return; }           // 全空格
    if (c == 7) { o << " leading" << endl; return; }        // 仅行首空格
    if (c == 8) { o << "trailing  " << endl; return; }      // 仅行尾空格
    int n = (int)rnd(1, 900);
    if (c % 3 == 0) n = (int)rnd(1, 20);
    if (c % 4 == 2) n = 1000;
    if (c % 5 == 4) n = 1;                       // 单字符
    string s;
    bool space = (rnd(0, 9) < 7);                // 大多含空格，偶测无空格整串
    if (!space) {
        for (int i = 0; i < n; i++) s += (char)('a' + rnd(0, 25));
    } else {
        bool lastSp = true;                      // 首字符当词首，避免双重空格起始歧义
        for (int i = 0; i < n; i++) {
            if (!lastSp && rnd(0, 4) == 0) { s += ' '; lastSp = true; }
            else { s += (char)('a' + rnd(0, 25)); lastSp = false; }
        }
        if (lastSp) s += 'a';                    // 末尾不出空格
    }
    o << s << endl;
}
#endif
