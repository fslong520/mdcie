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
 if(c==1)o<<"5 5\n2 3 1 4 2"<<endl; else if(c==2)o<<"3 10\n3 4 5"<<endl;
 else if(c==3)o<<"1 5\n5"<<endl; else if(c==4)o<<"3 3\n3 3 3"<<endl;
 else if(c==5)o<<"5 10\n1 2 3 4 5"<<endl; else if(c==6)o<<"4 6\n6 6 6 6"<<endl;
 else if(c>=7&&c<=15){int n=1000;int W=rnd(100,1000000);o<<n<<" "<<W<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rnd(1,W);}o<<endl;}
 else {int n=100000;int W=rnd(1000000,1000000000);o<<n<<" "<<W<<endl;for(int i=0;i<n;i++){if(i)o<<" ";o<<rnd(1,W);}o<<endl;}}
#endif
