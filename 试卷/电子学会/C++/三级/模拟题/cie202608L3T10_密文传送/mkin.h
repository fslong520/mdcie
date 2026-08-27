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
string rndstr(){int len=rnd(1,20);string s;for(int i=0;i<len;i++){int t=rnd(0,2);if(t==0)s+=char('a'+rnd(0,25));else if(t==1)s+=char('A'+rnd(0,25));else s+=char('0'+rnd(0,9));}return s;}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"xyz\n3"<<endl; else if(c==2)o<<"Hello, World!\n5"<<endl;
 if(c==3)o<<"abc\n26"<<endl; else if(c==4)o<<"ABC123\n1"<<endl;
 else if(c==5)o<<"zzzz\n1000"<<endl; else if(c==6)o<<"aBcD\n0"<<endl;
 else if(c>=7&&c<=15)o<<rndstr()<<"\n"<<rnd(1,1000)<<endl;
 else o<<rndstr()<<"\n"<<rnd(1,1000)<<endl;}
#endif
