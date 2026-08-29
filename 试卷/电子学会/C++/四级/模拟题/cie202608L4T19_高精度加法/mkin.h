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
void test(int c, ofstream& o){srand(20260913+c*271);
 if(c==1){o<<"12345678901234567890\n98765432109876543210"<<endl; return;}
 if(c==2){o<<"0\n0"<<endl; return;}
 if(c==3){o<<"99999999999999999999\n1"<<endl; return;}
 if(c==4){o<<"1\n99999999999999999999"<<endl; return;}
 int la=rnd(1,500), lb=rnd(1,500);
 string a,b;
 for(int i=0;i<la;i++)a+=char('0'+rnd(0,9));
 for(int i=0;i<lb;i++)b+=char('0'+rnd(0,9));
 if(a.size()>1&&a[0]=='0')a[0]=char('1'+rnd(0,8));
 if(b.size()>1&&b[0]=='0')b[0]=char('1'+rnd(0,8));
 if(c==5){a="0";b="0";}
 o<<a<<"\n"<<b<<endl;
}
#endif
