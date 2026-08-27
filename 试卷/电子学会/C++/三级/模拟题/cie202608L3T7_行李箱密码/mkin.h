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
string rndcode(){string s;for(int i=0;i<4;i++)s+=char('0'+rnd(0,9));return s;}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"0000\n9999"<<endl; else if(c==2)o<<"1234\n1244"<<endl;
 else if(c==3)o<<"0000\n0000"<<endl; else if(c==4)o<<"9999\n0000"<<endl;
 else if(c==5)o<<"1111\n9999"<<endl; else if(c==6)o<<"5000\n5000"<<endl;
 else if(c==7)o<<"0000\n4444"<<endl; else if(c==8)o<<"9876\n0123"<<endl;
 else if(c>=9&&c<=20)o<<rndcode()<<"\n"<<rndcode()<<endl;
 else o<<rndcode()<<"\n"<<rndcode()<<endl;}
#endif
