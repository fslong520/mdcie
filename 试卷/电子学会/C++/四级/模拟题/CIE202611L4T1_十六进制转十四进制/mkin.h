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

// 十六进制转十四进制 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261101 + case_num * 1000003);
    const char *dig = "0123456789ABCDEF";
    if (case_num == 1) fout << "2E" << endl;         // 46 = 34(14进制)
    else if (case_num == 2) fout << "D" << endl;
    else if (case_num == 3) fout << "0" << endl;
    else if (case_num == 4) fout << "1" << endl;
    else if (case_num == 5) fout << "D" << endl;     // 13 边界（<14 原样）
    else if (case_num == 6) fout << "E" << endl;     // 14 = "10"
    else if (case_num == 7) fout << "FFFFFFFF" << endl;  // 上界
    else if (case_num == 8) fout << "1E" << endl;    // 30 = 22(14进制)
    else if (case_num == 9) fout << "ABCDEF" << endl;
    else if (case_num == 10) fout << "10000000" << endl;
    else if (case_num >= 11 && case_num <= 25) {
        int len = (int)rnd_ll(1, 8);
        string s(1, dig[1 + rnd_ll(0, 14)]);
        for (int i = 1; i < len; i++) s += dig[rnd_ll(0, 15)];
        fout << s << endl;
    }
}

#endif