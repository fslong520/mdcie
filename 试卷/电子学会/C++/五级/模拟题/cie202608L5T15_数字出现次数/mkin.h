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
 if(c==1){o<<"7\n3 1 3 2 1 3 1"<<endl; return;}
 if(c==2){o<<"1\n1000000000"<<endl; return;}
 if(c>=3&&c<=8){int n=rnd(1,100);o<<n<<endl;for(int i=0;i<n;i++)o<<rnd(0,20)<<" \n"[i==n-1];}
 else if(c>=9&&c<=20){int n=rnd(1000,100000);o<<n<<endl;for(int i=0;i<n;i++)o<<rnd(0,1000000000)<<" \n"[i==n-1];}
 else{int n=rnd(1000,100000);o<<n<<endl;for(int i=0;i<n;i++)o<<rnd(0,1000000000)<<" \n"[i==n-1];}
}
#endif