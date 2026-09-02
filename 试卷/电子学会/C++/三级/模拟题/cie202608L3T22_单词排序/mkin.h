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
    if (c == 1) { o << "3\nbanana\napple\ncat" << endl; return; }
    if (c == 2) { o << "2\nbbb\naaa" << endl; return; }
    if (c == 3) { o << "4\nzebra\napple\nmango\napple" << endl; return; }
    if (c == 4) { o << "1\nhello" << endl; return; }
    int n = rnd(2, 50);
    if (c % 3 == 0) n = rnd(2, 6);
    if (c % 4 == 2) n = 50;
    o << n << endl;
    for (int i = 0; i < n; i++) {
        int len = rnd(1, 20);
        if (c % 5 == 1) len = rnd(1, 3);   // 短单词，易撞
        string w;
        for (int j = 0; j < len; j++) {
            int x = rnd(0, 25);
            if (c % 4 == 0) x = rnd(0, 1);  // 仅 a/b，制造大量相同前缀
            w += (char)('a' + x);
        }
        o << w << endl;
    }
}
#endif
