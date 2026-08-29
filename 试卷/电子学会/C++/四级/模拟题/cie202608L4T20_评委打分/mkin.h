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
void test(int c, ofstream& o){srand(20260914+c*359);
 if(c==1){o<<"5\n90 80 85 70 95"<<endl; return;}
 if(c==2){o<<"3\n100 100 100"<<endl; return;}
 if(c==3){o<<"4\n0 100 50 50"<<endl; return;}
 int n=rnd(3,1000);
 o<<n<<endl;
 for(int i=0;i<n;i++)o<<rnd(0,100)<<" \n"[i==n-1];
}
#endif
