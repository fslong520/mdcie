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
void test(int c, ofstream& o){srand(20260922+c*359);
 // ===== 样例 1~2 =====
 if(c==1){o<<"13"<<endl; return;}   // 1101 -> 1011 = 11
 if(c==2){o<<"1"<<endl; return;}    // n 最小值，边界

 // ===== 特殊性质 / 小规模 3~8 =====
 if(c==3){o<<"2"<<endl; return;}                        // 10 -> 1，反转丢前导 0
 if(c==4){o<<"8"<<endl; return;}                        // 1000 -> 1
 if(c==5){o<<"1000000000"<<endl; return;}               // 上限附近，输出 30 位反转
 if(c==6){o<<"536870911"<<endl; return;}                // 2^29-1，29 个 1 二叉回文
 if(c==7){o<<"1024"<<endl; return;}                     // 2^10，单个 1
 if(c==8){o<<"255"<<endl; return;}                      // 8 个 1，二叉回文

 // ===== Hack 数据 9~11 =====
 if(c==9){o<<"3"<<endl; return;}                        // 11 -> 11 = 3，2 位回文
 if(c==10){o<<"999999999"<<endl; return;}               // 接近上限的大奇数
 if(c==11){o<<"536870912"<<endl; return;}               // 2^29，反转后仅剩 1

 // ===== 中大规模 12~20 =====
 if(c==12){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==13){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==14){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==15){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==16){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==17){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==18){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==19){o<<rnd(1LL,1000000000LL)<<endl; return;}
 if(c==20){o<<rnd(1LL,1000000000LL)<<endl; return;}

 // ===== 随机回归 21~25 =====
 o<<rnd(1LL,1000000000LL)<<endl;
}
#endif