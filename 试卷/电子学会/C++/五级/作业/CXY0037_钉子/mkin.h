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
 if(c==1)o<<"2\n3\n1 5\n3 5\n2 4\n2\n1 4\n4 5"<<endl; else if(c==2)o<<"1\n1\n5 5"<<endl;
 else if(c==3)o<<"1\n3\n1 2\n3 4\n5 6"<<endl; else if(c==4)o<<"1\n2\n0 10000000\n0 10000000"<<endl;
 else if(c==5)o<<"3\n1\n0 1\n1\n1 2\n1\n2 3"<<endl; else if(c==6)o<<"1\n5\n1 5\n2 3\n4 6\n3 4\n5 7"<<endl;
 else if(c>=7&&c<=15){int t=rnd(1,10);o<<t<<endl;for(int k=0;k<t;k++){int n=rnd(1,300);o<<n<<endl;for(int i=0;i<n;i++){int l=rnd(0,10000000);int r=rnd(l,10000000);o<<l<<" "<<r<<endl;}}}
 else {int t=10;o<<t<<endl;for(int k=0;k<t;k++){int n=3000;o<<n<<endl;for(int i=0;i<n;i++){int l=rnd(0,10000000);int r=rnd(l,10000000);o<<l<<" "<<r<<endl;}}}}
#endif
