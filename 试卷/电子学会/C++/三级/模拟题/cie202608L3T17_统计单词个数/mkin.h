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
void test(int c, ofstream& o){srand(20260901+c*77);
 if(c==1){o<<"hello world"<<endl; return;}
 if(c==2){o<<"  i   love  cpp  "<<endl; return;}
 if(c==3){o<<"a"<<endl; return;}
 if(c==4){o<<"   "<<endl; return;}
 int n=rnd(1,900); string s;
 int words=rnd(1,20);
 for(int w=0;w<words;w++){int L=rnd(1,8); for(int j=0;j<L;j++)s+=char('a'+rnd(0,25)); if(w<words-1){int g=rnd(1,5); for(int j=0;j<g;j++)s+=' ';}}
 if(c%3==0)s=" "+s; if(c%4==0)s+=" ";
 if((int)s.size()>1000)s=s.substr(0,1000);
 o<<s<<endl;
}
#endif
