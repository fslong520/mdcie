#pragma once
#ifndef MKIN_H
#define MKIN_H
#include <bits/stdc++.h>
using namespace std;
const int TEST_CASES = 25;
struct SubtaskDef { int id, start, end; };
const SubtaskDef SUBTASKS[] = {{0,1,2},{1,3,8},{2,9,11},{3,12,20},{4,21,25}};
const int SUBTASK_COUNT = sizeof(SUBTASKS)/sizeof(SUBTASKS[0]);
long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}
#define rnd rnd_ll
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1){o<<"3\n7 8 15"<<endl; return;}
 if(c==2){o<<"1\n1024"<<endl; return;}
 if(c==3){o<<"2\n0 1"<<endl; return;}
 if(c>=4&&c<=20){int n=rnd(1,1000);o<<n<<endl;for(int i=0;i<n;i++)o<<rnd(0,1000000000)<<" \n"[i==n-1];}
 else {int n=rnd(1,1000);o<<n<<endl;for(int i=0;i<n;i++)o<<rnd(0,1000000000)<<" \n"[i==n-1];}
}
#endif