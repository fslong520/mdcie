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
void test(int c, ofstream& o){srand(20260923+c*503);
 if(c==1){o<<"4 2\nA 90 100\nB 90 200\nC 95 1\nD 85 999"<<endl; return;}
 if(c==2){o<<"1 1\nZ 50 10"<<endl; return;}
 if(c==3){o<<"3 3\nx 70 5\nx 70 5\nx 70 5"<<endl; return;}
 int n=rnd(1,100000); int k=rnd(1,n);
 o<<n<<" "<<k<<endl;
 for(int i=0;i<n;i++){
   string nm=char('A'+rnd(0,25))+to_string(rnd(1,999));
   o<<nm<<" "<<rnd(0,100)<<" "<<rnd(0,1000000000)<<"\n";
 }
}
#endif
