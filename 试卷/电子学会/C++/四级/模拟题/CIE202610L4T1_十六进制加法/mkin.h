#pragma once

#ifndef MKIN_H
#define MKIN_H

#include <bits/stdc++.h>
using namespace std;

const int TEST_CASES = 25;

struct SubtaskDef { int id, start, end; };
const SubtaskDef SUBTASKS[] = {
    {0, 1, 3},    // 样例
    {1, 4, 8},    // 小规模 / 特殊
    {2, 9, 11},   // Hack / 边界
    {3, 12, 20},  // 常规规模
    {4, 21, 25},  // 随机回归
};
const int SUBTASK_COUNT = sizeof(SUBTASKS) / sizeof(SUBTASKS[0]);

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

// 十六进制加法 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261007 + case_num * 1000003);
    const char *dig = "0123456789ABCDEF";
    auto rndhex = [&](int maxlen) {
        int len = rnd_ll(1, maxlen);
        string s(1, dig[1 + rnd_ll(0, 14)]);
        for (int i = 1; i < len; i++) s += dig[rnd_ll(0, 15)];
        return s;
    };
    if (case_num == 1) fout << "FF 1" << endl;
    else if (case_num == 2) fout << "2A 2A" << endl;
    else if (case_num == 3) fout << "0 0" << endl;
    else if (case_num == 4) fout << "0 FFFFFFFF" << endl;
    else if (case_num == 5) fout << "FFFFFFFF 1" << endl;   // 溢出 int 的和
    else if (case_num == 6) fout << "80000000 80000000" << endl;
    else if (case_num == 7) fout << "F F" << endl;
    else if (case_num == 8) fout << "1 F" << endl;
    else if (case_num == 9) fout << "ABCDEF 123456" << endl;
    else if (case_num >= 10 && case_num <= 25) {
        fout << rndhex(8) << " " << rndhex(8) << endl;
    }
}

#endif