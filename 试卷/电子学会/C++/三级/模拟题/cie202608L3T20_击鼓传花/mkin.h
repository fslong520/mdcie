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
void test(int c, ofstream& o){srand(20260904+c*307);
 if(c==1){o<<"5 3"<<endl; return;}
 if(c==2){o<<"1 1"<<endl; return;}
 if(c==3){o<<"4 1"<<endl; return;}
 if(c==4){o<<"6 6"<<endl; return;}
 int n=rnd(2,1000); int m=rnd(1,1000);
 o<<n<<" "<<m<<endl;
}
#endif
