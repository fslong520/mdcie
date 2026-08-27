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
string rndname(){int len=rnd(1,10);string s;s+=char('A'+rnd(0,25));for(int i=1;i<len;i++)s+=char('a'+rnd(0,25));return s;}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1)o<<"4 3\nAlice Bob Cindy David\nBob Alice Eve"<<endl; else if(c==2)o<<"3 3\nTom Jerry Spike\nAmy Ben Cathy"<<endl;
 else if(c==3)o<<"1 1\nA\nA"<<endl; else if(c==4)o<<"1 1\nA\nB"<<endl;
 else if(c>=5&&c<=15){int n=rnd(1,100),m=rnd(1,100);o<<n<<" "<<m<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rndname();}o<<endl;for(int i=0;i<m;i++){if(i)o<<" ";o<<rndname();}o<<endl;}
 else {int n=100000,m=100000;o<<n<<" "<<m<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rndname();}o<<endl;for(int i=0;i<m;i++){if(i)o<<" ";o<<rndname();}o<<endl;}}
#endif
