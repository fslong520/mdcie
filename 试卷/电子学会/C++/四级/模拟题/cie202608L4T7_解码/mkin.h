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
string rndk(int k,int len){string s;for(int i=0;i<len;i++){int d=rnd(0,k-1);s+=(d<10)?char('0'+d):char('A'+d-10);}if(s[0]=='0'&&s.size()>1)s[0]=(k>10)?'A':char('1'+rnd(0,k-2));return s;}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"16\nFF"<<endl; else if(c==2)o<<"2\n1010"<<endl;
 else if(c==3)o<<"10\n123456789"<<endl; else if(c==4)o<<"16\nFFFFFFFFFFFF"<<endl;
 else if(c==5)o<<"2\n111111111111111111111111111111"<<endl; else if(c==6)o<<"8\n7777777777777777777"<<endl;
 else if(c==7)o<<"16\nA"<<endl; else if(c==8)o<<"2\n1"<<endl;
 else if(c>=9&&c<=20){int k=rnd(2,16);o<<k<<"\n"<<rndk(k,rnd(1,max(1,(int)floor(18.0/log10(k)))))<<endl;}
 else {int k=rnd(2,16);o<<k<<"\n"<<rndk(k,rnd(1,max(1,(int)floor(18.0/log10(k)))))<<endl;}}
#endif
