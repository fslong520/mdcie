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

// 立方和 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261008 + case_num * 1000003);
    if (case_num == 1) fout << 3 << endl;
    else if (case_num == 2) fout << 100 << endl;
    else if (case_num == 3) fout << 1 << endl;
    else if (case_num == 4) fout << 2 << endl;
    else if (case_num == 5) fout << 10 << endl;
    else if (case_num == 6) fout << 30000 << endl;   // 上界
    else if (case_num == 7) fout << 29999 << endl;
    else if (case_num == 8) fout << 12345 << endl;
    else if (case_num == 9) fout << 46340 << endl;   // 超上界? 不，cap 至 30000
    else if (case_num == 9) fout << 30000 << endl;
    else if (case_num == 10) fout << 5000 << endl;
    else if (case_num >= 11 && case_num <= 25) {
        fout << rnd_ll(1, 30000) << endl;
    }
}

#endif