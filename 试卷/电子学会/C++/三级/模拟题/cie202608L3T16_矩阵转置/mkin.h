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
 if(c==1){o<<"2 3\n1 2 3\n4 5 6"<<endl; return;}
 if(c==2){o<<"3 1\n1\n2\n3"<<endl; return;}
 if(c==3){o<<"1 4\n7 8 9 10"<<endl; return;}
 if(c>=4&&c<=20){int n=rnd(1,100),m=rnd(1,100);o<<n<<" "<<m<<endl;for(int i=0;i<n;i++){for(int j=0;j<m;j++)o<<rnd(0,1000000)<<(j==m-1?"\n":" ");}}
 else {int n=rnd(1,100),m=rnd(1,100);o<<n<<" "<<m<<endl;for(int i=0;i<n;i++){for(int j=0;j<m;j++)o<<rnd(0,1000000)<<(j==m-1?"\n":" ");}}
}
#endif