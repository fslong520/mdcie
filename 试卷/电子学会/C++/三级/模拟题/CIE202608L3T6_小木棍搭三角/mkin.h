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
 if(c==1)o<<"3"<<endl; else if(c==2)o<<"5"<<endl;
 else if(c==3)o<<"4"<<endl; else if(c==4)o<<"6"<<endl;
 else if(c==5)o<<"10"<<endl; else if(c==6)o<<"20"<<endl;
 else if(c==7)o<<"50"<<endl; else if(c==8)o<<"100"<<endl;
 else if(c>=9&&c<=20)o<<rnd(3,100)<<endl;
 else o<<rnd(3,100)<<endl;}
#endif
