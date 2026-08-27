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
 if(c==1)o<<"3\n3 5 2"<<endl; else if(c==2)o<<"4\n5 1 5 1"<<endl;
 else if(c==3)o<<"1\n1"<<endl; else if(c==4)o<<"5\n100 99 98 1 100"<<endl;
 else if(c==5)o<<"3\n10 10 10"<<endl; else if(c==6)o<<"2\n50 51"<<endl;
 else if(c>=7&&c<=15){int n=100;o<<n<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rnd(1,100);}o<<endl;}
 else {int n=10000;o<<n<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rnd(1,100);}o<<endl;}}
#endif
