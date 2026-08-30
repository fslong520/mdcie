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
void test(int c, ofstream& o){srand(20260934+c*461);
 if(c==1){o<<"6\n1 5\n1 3\n3\n2 3\n1 1\n3\n"<<endl; return;}
 if(c==2){o<<"2\n3\n3\n"<<endl; return;}
 if(c==3){o<<"2\n2 7\n3\n"<<endl; return;}
 if(c==4){o<<"4\n1 9\n1 9\n2 5\n3\n"<<endl; return;}
 int n=rnd(1,100000);
 o<<n<<endl;
 for(int i=0;i<n;i++){
   int op=rnd(1,3);
   if(op==3)o<<"3\n";
   else o<<op<<" "<<rnd(1,1000000000)<<"\n";
 }
}
#endif
