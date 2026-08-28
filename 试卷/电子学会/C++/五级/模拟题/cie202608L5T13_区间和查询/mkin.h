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
    int n, q;
    if(c==1){o<<"5 3\n1 2 3 4 5\n1 5\n2 4\n3 3"<<endl; return;}
    if(c==2){o<<"3 2\n10 20 30\n1 2\n2 3"<<endl; return;}
    if(c==3){n=10;q=5;o<<n<<" "<<q<<endl;for(int i=1;i<=n;i++)o<<rnd(1,100)<<" \n"[i==n];for(int i=0;i<q;i++){int l=rnd(1,n),r=rnd(l,n);o<<l<<" "<<r<<endl;}return;}
    if(c>=4&&c<=8){n=rnd(100,1000);q=rnd(50,100);}
    else if(c>=9&&c<=11){n=rnd(1000,5000);q=rnd(100,500);}
    else if(c>=12&&c<=20){n=rnd(5000,100000);q=rnd(100,500);}
    else{n=rnd(50000,100000);q=rnd(100,500);}
    o<<n<<" "<<q<<endl;
    for(int i=1;i<=n;i++)o<<rnd(1,1000000000)<<" \n"[i==n];
    for(int i=0;i<q;i++){int l=rnd(1,n),r=rnd(l,n);o<<l<<" "<<r<<endl;}
}
#endif