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
void test(int c, ofstream& o){srand(20260903+c*211);
 if(c==1){o<<"123"<<endl; return;}
 if(c==2){o<<"-380"<<endl; return;}
 if(c==3){o<<"1200"<<endl; return;}
 if(c==4){o<<"0"<<endl; return;}
 long long n=rnd(1,1000000000);
 if(c%2==0)n=-n;
 o<<n<<endl;
}
#endif
