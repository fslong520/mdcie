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
 // c==1: 样例1, c==2: 样例2
 // c==3..25: 覆盖边界/Hack/中大规模/随机
 // c==3 n=1, c==4 n=2, c==5 n=500(上限), c==6 n=499, c==7~10 小值, c==11~13 Hack中值(n=100/200/300), c==14~20 中大规模, c==21~25 随机
 if(c==1){o<<"5\n";return;}
 if(c==2){o<<"10\n";return;}
 if(c==3){o<<"1\n";return;}
 if(c==4){o<<"2\n";return;}
 if(c==5){o<<"500\n";return;}
 if(c==6){o<<"499\n";return;}
 if(c==7){o<<"6\n";return;}
 if(c==8){o<<"8\n";return;}
 if(c==9){o<<"12\n";return;}
 if(c==10){o<<"20\n";return;}
 if(c==11){o<<"100\n";return;}
 if(c==12){o<<"200\n";return;}
 if(c==13){o<<"300\n";return;}
 // 中大规模：较大的确定值
 if(c==14){o<<"350\n";return;}
 if(c==15){o<<"400\n";return;}
 if(c==16){o<<"420\n";return;}
 if(c==17){o<<"450\n";return;}
 if(c==18){o<<"480\n";return;}
 if(c==19){o<<"490\n";return;}
 if(c==20){o<<"498\n";return;}
 // 随机回归 (case 21..25)
 long long x = rnd(1,500);
 o<<x<<"\n";
 return;
}
#endif