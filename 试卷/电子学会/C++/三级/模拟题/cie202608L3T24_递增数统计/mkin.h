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
bool incS(int x){ int last=10; while(x){ int d=x%10; if(d>=last) return false; last=d; x/=10; } return true; }
void test(int c, ofstream& o){
    srand(20260903 + c * 211);
    if (c == 1) { o << "1 20" << endl; return; }
    if (c == 2) { o << "100 200" << endl; return; }
    if (c == 3) { o << "7 7" << endl; return; }
    if (c == 4) { o << "1 100000" << endl; return; }    int L = (int)rnd(1, 99999);
    int R = L + (int)rnd(0, 100000 - L);
    if (c % 2 == 1) {                       // 小区间
        L = (int)rnd(1, 300);
        R = L + (int)rnd(0, 200);
    }
    if (c % 5 == 0) R = L;                  // 单点区间
    o << L << " " << R << endl;
}
#endif
