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
void test(int c, ofstream& o){srand(20260924+c*613);
 if(c==1){o<<"3\n67\n5\n999999999"<<endl; return;}
 if(c==2){o<<"1\n1"<<endl; return;}
 if(c==3){o<<"1\n1000000000"<<endl; return;}
 int T=rnd(1,100000);
 o<<T<<endl;
 for(int i=0;i<T;i++)o<<rnd(1,1000000000)<<" \n"[i==T-1];
}
#endif
