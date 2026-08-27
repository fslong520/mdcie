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
 if(c==1)o<<"3\n2\n1\n0"<<endl; else if(c==2)o<<"1\n0"<<endl;
 else if(c==3)o<<"2\n0"<<endl; else if(c==4)o<<"4\n0"<<endl;
 else if(c==5)o<<"8\n0"<<endl; else if(c==6)o<<"10\n0"<<endl;
 else if(c==7)o<<"3\n4\n5\n0"<<endl; else if(c==8)o<<"6\n7\n0"<<endl;
 else if(c>=9&&c<=20){int k=rnd(1,5);for(int i=0;i<k;i++)o<<rnd(1,8)<<endl;o<<"0"<<endl;}
 else {int k=5;for(int i=0;i<k;i++)o<<rnd(1,10)<<endl;o<<"0"<<endl;}}
#endif
