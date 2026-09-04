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

// 2的幂 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261103 + case_num * 1000003);
    if (case_num == 1) fout << 8 << endl;
    else if (case_num == 2) fout << 12 << endl;
    else if (case_num == 3) fout << 0 << endl;   // 2^0 = 1
    else if (case_num == 4) fout << 1 << endl;
    else if (case_num == 5) fout << 4 << endl;
    else if (case_num == 6) fout << 7 << endl;   // 80 = 0x50 检验非整十六进制位
    else if (case_num == 7) fout << 13 << endl;  // 2000
    else if (case_num == 8) fout << 20 << endl;
    else if (case_num == 9) fout << 100 << endl;
    else if (case_num == 10) fout << 199 << endl;
    else if (case_num == 11) fout << 200 << endl;
    else if (case_num >= 12 && case_num <= 20) {
        fout << rnd_ll(0, 200) << endl;
    } else {
        fout << rnd_ll(150, 200) << endl;
    }
}

#endif