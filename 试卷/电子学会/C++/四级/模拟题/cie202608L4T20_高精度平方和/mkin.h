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
void test(int c, ofstream& o){srand(20260933+c*359);
 if(c==1){o<<"12\n34"<<endl; return;}
 if(c==2){o<<"0\n0"<<endl; return;}
 if(c==3){o<<"99\n99"<<endl; return;}
 if(c==4){o<<"100000000000000000000\n1"<<endl; return;}
 int la=rnd(1,100), lb=rnd(1,100);
 string x,y;
 for(int i=0;i<la;i++)x+=char('0'+rnd(0,9));
 for(int i=0;i<lb;i++)y+=char('0'+rnd(0,9));
 if(x.size()>1&&x[0]=='0')x[0]=char('1'+rnd(0,8));
 if(y.size()>1&&y[0]=='0')y[0]=char('1'+rnd(0,8));
 if(c==5){x="0";y="0";}
 o<<x<<"\n"<<y<<endl;
}
#endif
