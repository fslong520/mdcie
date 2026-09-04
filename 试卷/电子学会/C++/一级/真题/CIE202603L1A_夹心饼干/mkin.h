#pragma once

#ifndef MKIN_H
#define MKIN_H

#include <bits/stdc++.h>
using namespace std;

const int TEST_CASES = 25;

struct SubtaskDef {
    int id, start, end;
};
const SubtaskDef SUBTASKS[] = {
    {0, 1, 3},    // 样例
    {1, 4, 8},    // 小规模 + 特殊性质
    {2, 9, 11},   // Hack 数据
    {3, 12, 20},  // 中大规模
    {4, 21, 25},  // 随机回归
};
const int SUBTASK_COUNT = sizeof(SUBTASKS) / sizeof(SUBTASKS[0]);

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

// 夹心饼干 - 测试数据生成
// 输入：三个整数 a、b、c
// 输出：恰好两数相等输出 Yes，否则 No
// 范围：1 ≤ a、b、c ≤ 9

void test(int case_num, ofstream& fout)
{
    srand(20260904 + case_num * 1000003);

    if (case_num == 1) fout << "3 3 2" << endl;
    else if (case_num == 2) fout << "2 2 2" << endl;
    else if (case_num == 3) fout << "1 2 3" << endl;
    else if (case_num == 4) fout << "1 1 9" << endl;
    else if (case_num == 5) fout << "9 1 9" << endl;
    else if (case_num == 6) fout << "1 9 9" << endl;
    else if (case_num == 7) fout << "5 5 5" << endl;
    else if (case_num == 8) fout << "9 9 1" << endl;
    else if (case_num == 9) fout << "7 7 7" << endl;         // 三同
    else if (case_num == 10) fout << "4 5 6" << endl;        // 三异
    else if (case_num == 11) fout << "1 1 1" << endl;        // 最小值三同
    else if (case_num >= 12 && case_num <= 20) {
        fout << rnd_ll(1, 9) << " " << rnd_ll(1, 9) << " " << rnd_ll(1, 9) << endl;
    }
    else fout << rnd_ll(1, 9) << " " << rnd_ll(1, 9) << " " << rnd_ll(1, 9) << endl;
}

#endif