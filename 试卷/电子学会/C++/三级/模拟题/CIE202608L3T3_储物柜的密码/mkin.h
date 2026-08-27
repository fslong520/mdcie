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
string rndword(){int len=rnd(1,20);string s;for(int i=0;i<len;i++)s+=char('a'+rnd(0,25));return s;}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"apple"<<endl; else if(c==2)o<<"bike"<<endl;
 else if(c==3)o<<"a"<<endl; else if(c==4)o<<"zzz"<<endl;
 else if(c==5)o<<"abcdefghijklmnopqrstuvwxyz"<<endl; else if(c==6)o<<"aaaa"<<endl;
 else if(c>=7&&c<=20)o<<rndword()<<endl;
 else o<<rndword()<<endl;}
#endif
