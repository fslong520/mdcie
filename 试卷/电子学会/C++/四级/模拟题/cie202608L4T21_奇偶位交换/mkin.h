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
void test(int c, ofstream& o){srand(20260901+c*359);
 if(c==1){o<<"10"<<endl; return;}
 if(c==2){o<<"15"<<endl; return;}
 if(c==3){o<<"1"<<endl; return;}
 if(c==4){o<<"2"<<endl; return;}
 if(c==5){o<<"3"<<endl; return;}
 if(c==6){o<<"1000000000"<<endl; return;}
 if(c==7){o<<"999999999"<<endl; return;}
 if(c==8){o<<"8"<<endl; return;}
 if(c==9){o<<"1073741823"<<endl; return;}   // 2^30-1，全1，交换后不变
 if(c==10){o<<"1073741824"<<endl; return;}  // 2^30，偶位交换成 2^29
 if(c==11){o<<"2863311530"<<endl; return;}  // 1010..1010 模式
 if(c==12){o<<"1431655765"<<endl; return;}  // 0101..0101 模式
 if(c==13){o<<"5"<<endl; return;}
 if(c==14){o<<"13"<<endl; return;}
 if(c==15){o<<"255"<<endl; return;}
 if(c==16){o<<"256"<<endl; return;}
 if(c==17){o<<"123456789"<<endl; return;}
 if(c==18){o<<"987654321"<<endl; return;}
 if(c==19){o<<"536870911"<<endl; return;}
 if(c==20){o<<"536870912"<<endl; return;}
 long long x = rnd(1, 1000000000);
 o<<x<<endl;
}
#endif
