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
string mkpal(int len){string s;for(int i=0;i<len;i++){char c='a'+rnd(0,25);s+=c;}string t=s;reverse(t.begin(),t.end());return s+t.substr(1);}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"abcba"<<endl; else if(c==2)o<<"hello"<<endl;
 else if(c==3)o<<"a"<<endl; else if(c==4)o<<"aa"<<endl;
 else if(c==5)o<<"ab"<<endl; else if(c>=6&&c<=8){int len=rnd(1,100);string s;for(int i=0;i<len;i++)s+=char('a'+rnd(0,25));o<<s<<endl;}
 else if(c>=9&&c<=20)o<<mkpal(rnd(1,100))<<endl;
 else o<<mkpal(rnd(1,100))<<endl;}
#endif