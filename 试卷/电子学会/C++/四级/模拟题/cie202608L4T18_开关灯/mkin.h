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
void test(int c, ofstream& o){srand(20260912+c*173);
 if(c==1){o<<"5 3\n0\n2\n0"<<endl; return;}
 if(c==2){o<<"1 1\n0"<<endl; return;}
 if(c==3){o<<"10 1\n9"<<endl; return;}
 if(c==4){o<<"3 6\n0\n0\n0\n0\n0\n0"<<endl; return;}
 int n=rnd(2,30); int m=rnd(1,100000);
 o<<n<<" "<<m<<endl;
 for(int i=0;i<m;i++)o<<rnd(0,n-1)<<" \n"[i==m-1];
}
#endif
