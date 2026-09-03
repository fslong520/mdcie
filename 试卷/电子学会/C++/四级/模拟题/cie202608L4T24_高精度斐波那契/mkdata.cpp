// mkdata.cpp：生成 25 组 testdata 输入，并调用 std 生成输出
#include <bits/stdc++.h>
using namespace std;
#include "mkin.h"

int main() {
    // 确保 testdata 目录存在（Linux 下）
    system("mkdir -p testdata");
    for (int c = 1; c <= TEST_CASES; ++c) {
        char inname[64], tmp[64];
        sprintf(inname, "testdata/%d.in", c);
        ofstream o(inname);
        test(c, o);
        o.close();
        // 调用 std 生成输出。当前路径已在题目目录，std 也在题目目录。
        sprintf(tmp, "./std < testdata/%d.in > testdata/%d.out", c, c);
        system(tmp);
    }
    return 0;
}