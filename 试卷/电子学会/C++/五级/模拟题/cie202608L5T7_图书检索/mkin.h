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
 if(c==1)o<<"5 4\n1 3 5 7 9"<<endl; else if(c==2)o<<"4 6\n1 4 7 10"<<endl;
 else if(c==3)o<<"1 5\n5"<<endl; else if(c==4)o<<"5 0\n1 3 5 7 9"<<endl;
 else if(c==5)o<<"5 10\n1 3 5 7 9"<<endl; else if(c==6)o<<"3 5\n5 5 5"<<endl;
 else if(c>=7&&c<=15){int n=1000;vector<int>v(n);o<<n<<" "<<rnd(1,1000000000)<<endl;for(int i=0;i<n;i++)v[i]=rnd(1,1000000000);sort(v.begin(),v.end());for(int i=0;i<n;i++){if(i)o<<" ";o<<v[i];}o<<endl;}
 else {int n=100000;vector<int>v(n);o<<n<<" "<<rnd(1,1000000000)<<endl;for(int i=0;i<n;i++)v[i]=rnd(1,1000000000);sort(v.begin(),v.end());for(int i=0;i<n;i++){if(i)o<<" ";o<<v[i];}o<<endl;}}
#endif
