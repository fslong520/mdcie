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
string rndv(){int len=rnd(1,1000);string s;for(int i=0;i<len;i++){int t=rnd(0,1);if(t==0)s+=char('a'+rnd(0,25));else s+=char('A'+rnd(0,25));}return s;}
string vows(){int len=rnd(1,1000);string s;string v="aeiouAEIOU";for(int i=0;i<len;i++)s+=v[rnd(0,9)];return s;}
string cons(){int len=rnd(1,1000);string s;string v="bcdfgBCDFG";for(int i=0;i<len;i++)s+=v[rnd(0,9)];return s;}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"AbcdeE"<<endl; else if(c==2)o<<"xyz"<<endl;
 else if(c==3)o<<"a"<<endl; else if(c==4)o<<"AEIOUaeiou"<<endl;
 else if(c==5)o<<string(1000,'a')<<endl; else if(c==6)o<<cons()<<endl;
 else if(c==7)o<<vows()<<endl; else if(c==8)o<<"aAeEiIoOuU"<<endl;
 else if(c>=9&&c<=20)o<<rndv()<<endl;
 else o<<rndv()<<endl;}
#endif
