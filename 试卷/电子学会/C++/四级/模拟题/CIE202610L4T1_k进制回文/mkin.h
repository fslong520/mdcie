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

// k进制回文 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261007 + case_num * 1000003);
    if (case_num == 1) fout << "2 9" << endl;
    else if (case_num == 2) fout << "10 19" << endl;
    else if (case_num == 3) fout << "16 255" << endl;
    else if (case_num == 4) fout << "2 1" << endl;
    else if (case_num == 5) fout << "10 0" << endl;         // 0 是回文
    else if (case_num == 6) fout << "2 1048577" << endl;    // 100000000000000000001
    else if (case_num == 7) fout << "8 5893" << endl;
    else if (case_num == 8) fout << "15 224" << endl;       // 224 = EE(15进制) EE? 14*15+14=224 → "EE" 回文
    else if (case_num == 9) fout << "16 4095" << endl;      // FFF 回文
    else if (case_num == 10) fout << "12 155" << endl;      // 155 = 10B? 12*12=144, 155-144=11=B → "10B" 非回文
    else if (case_num >= 11 && case_num <= 25) {
        fout << rnd_ll(2, 16) << " " << rnd_ll(0, 1000000000) << endl;
    }
}

#endif