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
 if(c==1)o<<"3 2\n5 7 8"<<endl; else if(c==2)o<<"2 0\n1 2"<<endl;
 else if(c==3)o<<"1 0\n0"<<endl; else if(c==4)o<<"1 30\n1000000000"<<endl;
 else if(c==5)o<<"3 1\n2 3 4"<<endl; else if(c==6)o<<"5 4\n16 17 18 19 20"<<endl;
 else if(c>=7&&c<=15){int n=100;int k=rnd(0,30);o<<n<<" "<<k<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rnd(0,1000000000);}o<<endl;}
 else {int n=100000;int k=rnd(0,30);o<<n<<" "<<k<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rnd(0,1000000000);}o<<endl;}}
#endif
