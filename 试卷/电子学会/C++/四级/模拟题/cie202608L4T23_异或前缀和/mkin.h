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
void test(int c, ofstream& o){srand(20260923+c*359);
 if(c==1){o<<"5"<<endl; return;}
 if(c==2){o<<"6"<<endl; return;}
 if(c==3){o<<"1"<<endl; return;}
 if(c==4){o<<"2"<<endl; return;}
 if(c==5){o<<"3"<<endl; return;}
 if(c==6){o<<"4"<<endl; return;}
 if(c==7){o<<"1000000000"<<endl; return;} // 10^9 %4=0 -> n
 if(c==8){o<<"999999999"<<endl; return;}  // %4=3 -> 0
 if(c==9){o<<"999999998"<<endl; return;}  // %4=2 -> n+1
 if(c==10){o<<"1000000001"<<endl; return;} // %4=1 -> 1
 if(c==11){o<<"7"<<endl; return;}
 if(c==12){o<<"8"<<endl; return;}
 if(c==13){o<<"255"<<endl; return;}// %4=3 -> 0
 if(c==14){o<<"256"<<endl; return;}// %4=0
 if(c==15){o<<"257"<<endl; return;}// %4=1
 if(c==16){o<<"1000000004"<<endl; return;}// %4=0
 if(c==17){o<<"1000000003"<<endl; return;}// %4=3
 if(c==18){o<<"536870911"<<endl; return;}// %4=3 -> 0
 if(c==19){o<<"536870912"<<endl; return;}// %4=0
 if(c==20){o<<"536870913"<<endl; return;}// %4=1
 long long x = rnd(1, 1000000000);
 o<<x<<endl;
}
#endif
