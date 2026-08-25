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
 * 花坛 - 测试数据生成
 * 输入：n，以及 n 个目标高度 h
 * 输出：最少浇水次数
 * 范围：1 ≤ n ≤ 100，0 ≤ hi ≤ 100
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) fout << "5\n3 1 2 3 1\n";
    else if (case_num == 2) fout << "8\n4 23 75 0 23 96 50 100\n";
    else if (case_num == 3) fout << "1\n0\n";
    else if (case_num == 4) fout << "1\n100\n";
    else if (case_num == 5) fout << "4\n5 4 3 2\n";     // 递减
    else if (case_num == 6) fout << "4\n2 3 4 5\n";     // 递增
    else if (case_num == 7) fout << "6\n100 100 100 100 100 100\n";
    else if (case_num == 8) fout << "5\n0 1 0 1 0\n";
    else if (case_num == 9) fout << "100\n100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0 100 0\n";
    else if (case_num == 10) fout << "2\n100 100\n";
    else if (case_num == 11) fout << "3\n50 99 50\n";
    else if (case_num >= 12 && case_num <= 20) {
        int n = 20 + (case_num - 12) * 10;
        fout << n << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(0, 100); }
        fout << endl;
    }
    else {
        fout << "100" << endl;
        for (int i = 0; i < 100; i++) { if (i) fout << " "; fout << rnd_ll(0, 100); }
        fout << endl;
    }
}

#endif