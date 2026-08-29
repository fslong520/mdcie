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
void test(int c, ofstream& o){srand(20260921+c*397);
 if(c==1){o<<"2 10\n2 5 3 100"<<endl; return;}
 if(c==2){o<<"1 100\n5 10"<<endl; return;}
 if(c==3){o<<"1 1\n1 1000000000"<<endl; return;}
 if(c==4){o<<"3 1000000000000000000\n1000000000 1000000000 1000000000 1000000000 1000000000 1000000000"<<endl; return;}
 int n=rnd(1,100000);
 o<<n<<" "<<rnd(1,1000000000000000000LL)<<endl;
 for(int i=0;i<n;i++)o<<rnd(1,1000000000)<<" "<<rnd(1,1000000000)<<" \n"[i==n-1];
}
#endif
