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

// 两数相同位 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261009 + case_num * 1000003);
    if (case_num == 1) fout << "5 3" << endl;
    else if (case_num == 2) fout << "233 233" << endl;
    else if (case_num == 3) fout << "1 1000000000" << endl;  // 位数悬殊
    else if (case_num == 4) fout << "1000000000 999999999" << endl;
    else if (case_num == 5) fout << "1073741823 0" << endl;  // 0 特判? n≥1，改为1
    else if (case_num == 5) fout << "1073741823 1" << endl;
    else if (case_num == 6) fout << "65536 65537" << endl;
    else if (case_num == 7) fout << "7 7" << endl;
    else if (case_num == 8) fout << "536870912 536870911" << endl;
    else if (case_num == 9) fout << "2 1" << endl;
    else if (case_num == 10) fout << "3 17" << endl;
    else if (case_num >= 11 && case_num <= 25) {
        fout << rnd_ll(1, 1000000000) << " " << rnd_ll(1, 1000000000) << endl;
    }
}

#endif