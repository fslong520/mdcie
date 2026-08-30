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
void test(int c, ofstream& o){srand(20260932+c*271);
 if(c==1){o<<"22"<<endl; return;}
 if(c==2){o<<"8"<<endl; return;}
 if(c==3){o<<"9"<<endl; return;}
 if(c==4){o<<"15"<<endl; return;}
 if(c==5){o<<"1"<<endl; return;}
 if(c==6){o<<"536870912"<<endl; return;}
 o<<rnd(1,1000000000)<<endl;
}
#endif
