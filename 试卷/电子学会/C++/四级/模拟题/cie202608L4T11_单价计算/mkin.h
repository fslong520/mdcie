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
string rndn(int len){string s;s+=char('1'+rnd(0,9));for(int i=1;i<len;i++)s+=char('0'+rnd(0,9));return s;}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"123\n4"<<endl; else if(c==2)o<<"999999999999999999999999\n9"<<endl;
 else if(c==3)o<<"1\n9"<<endl; else if(c==4)o<<"999\n1"<<endl;
 else if(c==5)o<<"1000\n8"<<endl; else if(c==6)o<<rndn(50)<<"\n"<<rnd(1,9)<<endl;
 else if(c==7)o<<string(1000,'9')<<"\n9"<<endl; else if(c==8)o<<string(1000,'9')<<"\n1"<<endl;
 else if(c>=9&&c<=20)o<<rndn(rnd(10,100))<<"\n"<<rnd(1,9)<<endl;
 else o<<rndn(1000)<<"\n"<<rnd(1,9)<<endl;}
#endif
