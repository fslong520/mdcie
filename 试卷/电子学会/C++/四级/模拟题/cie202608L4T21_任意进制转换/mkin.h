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
void test(int c, ofstream& o){srand(20260921+c*359);
 // ===== 样例 1~2 =====
 if(c==1){o<<"2009 16"<<endl; return;}
 if(c==2){o<<"0 5"<<endl; return;}

 // ===== 特殊性质 / 小规模 3~8 =====
 if(c==3){o<<"1 2"<<endl; return;}                       // n 最小值 1，k 最小
 if(c==4){o<<"0 16"<<endl; return;}                      // n=0，k 最大，全 0 边界
 if(c==5){o<<"1000000000 2"<<endl; return;}              // 10^9 转二进制，输出最长
 if(c==6){o<<"1000000000 16"<<endl; return;}             // 10^9 转十六进制，k 最大
 if(c==7){o<<"1000000000 7"<<endl; return;}              // 10^9 与中间进制（出题要求）
 if(c==8){o<<"255 16"<<endl; return;}                    // 全 F 结构，进位到位的极端

 // ===== Hack 数据 9~11 =====
 if(c==9){o<<"16777215 16"<<endl; return;}              // FFFFFF，十六进制全 F 进位极端
 if(c==10){o<<"999999999 2"<<endl; return;}              // 接近上限的大奇数
 if(c==11){o<<"305419896 16"<<endl; return;}             // 十六进制 12345678，A-F 连续

 // ===== 中大规模 12~20 =====
 if(c==12){o<<rnd(1000000000LL,1000000000LL)<<" "<<rnd(2,16)<<endl; return;}
 if(c==13){o<<rnd(0LL,1000000000LL)<<" 2"<<endl; return;}
 if(c==14){o<<rnd(0LL,1000000000LL)<<" 16"<<endl; return;}
 if(c==15){o<<rnd(0LL,1000000000LL)<<" 3"<<endl; return;}    // 奇数进制，高位用 A-F 机会少
 if(c==16){o<<rnd(100000000LL,1000000000LL)<<" "<<rnd(2,16)<<endl; return;}
 if(c==17){o<<rnd(0LL,1000000000LL)<<" "<<rnd(2,16)<<endl; return;}
 if(c==18){o<<rnd(0LL,1000000000LL)<<" "<<rnd(2,16)<<endl; return;}
 if(c==19){o<<rnd(100000000LL,1000000000LL)<<" "<<rnd(2,16)<<endl; return;}
 if(c==20){o<<rnd(500000000LL,1000000000LL)<<" "<<rnd(13,16)<<endl; return;}

 // ===== 随机回归 21~25 =====
 o<<rnd(0LL,1000000000LL)<<" "<<rnd(2,16)<<endl;
}
#endif