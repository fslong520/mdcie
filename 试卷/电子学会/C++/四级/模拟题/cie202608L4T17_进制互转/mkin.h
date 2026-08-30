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
void test(int c, ofstream& o){srand(20260931+c*173);
 if(c==1){o<<"B\n1010101"<<endl; return;}
 if(c==2){o<<"H\nFF"<<endl; return;}
 if(c==3){o<<"B\n1111"<<endl; return;}
 if(c==4){o<<"H\nA"<<endl; return;}
 if(c==5){o<<"B\n0"<<endl; return;}
 if(c==6){o<<"H\n0"<<endl; return;}
 long long v=rnd(1,2147483647LL);
 if(c%2==1){ // B方向
   string s=""; long long x=v;
   while(x>0){s=char('0'+x%2)+s;x/=2;}
   o<<"B\n"<<s<<endl;
 } else {    // H方向
   string s=""; long long x=v;
   char hh[]="0123456789ABCDEF";
   while(x>0){s=hh[x%16]+s;x/=16;}
   o<<"H\n"<<s<<endl;
 }
}
#endif
