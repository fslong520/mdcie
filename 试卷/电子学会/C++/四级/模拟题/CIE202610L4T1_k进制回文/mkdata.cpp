#include <bits/stdc++.h>
#include "mkin.h"

void mk_in() {
    if (system("rm -rf testdata/*.in testdata/*.out testdata/*.zip") != 0) {}
    if (system("mkdir -p testdata") != 0) {}
    for (int i = 1; i <= TEST_CASES; ++i) {
        ofstream fout("testdata/" + to_string(i) + ".in");
        test(i, fout);
    }
    for (int i = 1; i <= TEST_CASES; ++i) {
        string cmd = "./std < testdata/" + to_string(i) + ".in > testdata/" + to_string(i) + ".out";
        if (system(cmd.c_str()) != 0) cerr << "out fail " << i << endl;
    }
    system("rm -f std");
    cout << "done" << endl;
}

int main() {
    if (system("g++ std.cpp -o std -std=c++17") != 0) { cerr << "compile fail" << endl; return 1; }
    mk_in();
    return 0;
}
