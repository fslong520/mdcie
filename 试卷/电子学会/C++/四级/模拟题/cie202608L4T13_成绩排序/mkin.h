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
string rndname() {
    int len = rnd(3, 8); string s;
    for (int i = 0; i < len; i++) s += char('a' + rnd(0, 25));
    return s;
}
void test(int c, ofstream& o){srand(20260826+c*1000003);
 if(c==1){o<<"3\namy 90 80 70\nbob 85 90 80\ncat 90 80 70"<<endl; return;}
 if(c==2){o<<"2\naaa 100 100 100\nbbb 0 0 0"<<endl; return;}
 if(c==3){o<<"1\nzzz 50 50 50"<<endl; return;}
 if(c==4){o<<"4\ncc 90 90 90\naa 90 90 90\ndd 80 80 80\nbb 90 90 90"<<endl; return;}
 if(c>=5&&c<=20){int n=rnd(1,1000); o<<n<<endl; for(int i=0;i<n;i++)o<<rndname()<<" "<<rnd(0,100)<<" "<<rnd(0,100)<<" "<<rnd(0,100)<<endl;}
 else {int n=rnd(1,1000); o<<n<<endl; for(int i=0;i<n;i++)o<<rndname()<<" "<<rnd(0,100)<<" "<<rnd(0,100)<<" "<<rnd(0,100)<<endl;}
}
#endif