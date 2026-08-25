#pragma once

#ifndef MKIN_H
#define MKIN_H

#include <bits/stdc++.h>
using namespace std;

// ═══════════════════════════════════════════════════════════════════
// 总测试点数量 & Subtask 分组配置
// ═══════════════════════════════════════════════════════════════════
const int TEST_CASES = 25;

struct SubtaskDef {
    int id, start, end;
};
const SubtaskDef SUBTASKS[] = {
    {0, 1, 2},    // 样例
    {1, 3, 8},    // 小规模 + 特殊性质
    {2, 9, 11},   // Hack 数据
    {3, 12, 20},  // 中大规模
    {4, 21, 25},  // 随机回归
};
const int SUBTASK_COUNT = sizeof(SUBTASKS) / sizeof(SUBTASKS[0]);

/**
 * 四方定理 - 测试数据生成
 * 输入：一个自然数 n
 * 输出：n 的所有四平方拆分方案（字典序）
 * 范围：0 ≤ n ≤ 50000
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) fout << "25" << endl;
    else if (case_num == 2) fout << "1" << endl;
    else if (case_num == 3) fout << "0" << endl;
    else if (case_num == 4) fout << "2" << endl;
    else if (case_num == 5) fout << "4" << endl;      // 2^2
    else if (case_num == 6) fout << "5" << endl;
    else if (case_num == 7) fout << rnd_ll(1, 100) << endl;
    else if (case_num == 8) fout << "144" << endl;    // 12^2
    else if (case_num == 9) fout << "50000" << endl;  // 极限
    else if (case_num == 10) fout << "49999" << endl;
    else if (case_num == 11) fout << "2500" << endl;  // 50^2
    else if (case_num >= 12 && case_num <= 20) {
        fout << rnd_ll(1, 20000) << endl;
    }
    else fout << rnd_ll(20000, 50000) << endl;
}

#endif