#include <bits/stdc++.h>
#include "mkin.h"
using namespace std;

int main()
{
    srand(20260903 + 10 * 211);
    if (system("g++ std.cpp -o std -std=c++14") != 0) {
        cerr << "std 编译失败" << endl;
        return 1;
    }
    if (system("rm -f testdata/*.in testdata/*.out") != 0) {
        cerr << "清理旧数据失败" << endl;
    }
    system("mkdir -p testdata");
    for (int i = 1; i <= TEST_CASES; i++) {
        string in = "testdata/" + to_string(i) + ".in";
        ofstream fout(in);
        test(i, fout);
        fout.close();
        string cmd = "./std < " + in + " > testdata/" + to_string(i) + ".out";
        if (system(cmd.c_str()) != 0) {
            cerr << "case " << i << " 输出生成失败" << endl;
            return 1;
        }
    }
    system("rm -f std");
    cout << "T10 数据 " << TEST_CASES << " 组生成完毕" << endl;
    return 0;
}
