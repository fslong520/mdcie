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
void test(int c, ofstream& o){srand(20260902+c*131);
 if(c==1){o<<"ababab\naba"<<endl; return;}
 if(c==2){o<<"aaaa\naa"<<endl; return;}
 if(c==3){o<<"hello world\nxyz"<<endl; return;}
 if(c==4){o<<"abc\nabcdef"<<endl; return;}
 int n=rnd(5,900); int m=rnd(1,min(n,50));
 string s,t;
 for(int i=0;i<n;i++)s+=char('a'+rnd(0,25));
 int pos=rnd(0,n-m);
 for(int i=0;i<m;i++)t+=s[pos+i];
 if(c%4==0){t.clear(); for(int i=0;i<m;i++)t+=char('a'+rnd(0,25));}
 o<<s<<"\n"<<t<<endl;
}
#endif
