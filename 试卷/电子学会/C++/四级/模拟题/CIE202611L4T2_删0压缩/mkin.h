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

// 删0压缩 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261102 + case_num * 1000003);
    if (case_num == 1) fout << 26 << endl;
    else if (case_num == 2) fout << 4 << endl;
    else if (case_num == 3) fout << 1 << endl;
    else if (case_num == 4) fout << 2 << endl;          // 10 -> 1
    else if (case_num == 5) fout << 3 << endl;          // 11 -> 3
    else if (case_num == 6) fout << 1023 << endl;       // 全1 -> 1023
    else if (case_num == 7) fout << 1 << (30) << endl;  // 不行，改为 2^30
    else if (case_num == 7) fout << (1LL << 30) << endl;
    else if (case_num == 8) fout << 536870911 << endl;  // 29个1
    else if (case_num >= 9 && case_num <= 25) {
        fout << rnd_ll(1, 1000000000) << endl;
    }
}

#endif