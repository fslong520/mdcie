#include <bits/stdc++.h>
#include "mkin.h"
using namespace std;
int main(){
    system("mkdir -p testdata");
    for(int i=1;i<=TEST_CASES;i++){
        ofstream o("testdata/"+to_string(i)+".in");
        test(i, o); o.close();
        string cmd = "cd testdata && ../std < "+to_string(i)+".in > "+to_string(i)+".out";
        system(cmd.c_str());
    }
    cout<<"T23 done"<<endl;
    return 0;
}
