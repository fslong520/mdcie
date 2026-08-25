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
    {0, 1, 3},    // 样例
    {1, 4, 8},    // 小规模 + 特殊性质
    {2, 9, 11},   // Hack 数据
    {3, 12, 20},  // 中大规模
    {4, 21, 25},  // 随机回归
};
const int SUBTASK_COUNT = sizeof(SUBTASKS) / sizeof(SUBTASKS[0]);

/**
 * 计算不同位 - 测试数据生成
 * 输入：两个正整数 n、m
 * 输出：二进制位上不同位数
 * 范围：1 ≤ n、m ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) fout << "2 1" << endl;
    else if (case_num == 2) fout << "3 17" << endl;
    else if (case_num == 3) fout << "233 233" << endl;
    else if (case_num == 4) fout << "1 1" << endl;             // 相同
    else if (case_num == 5) fout << "1 2147483647" << endl;    // 全不同（1 与 2^31-1）
    else if (case_num == 6) fout << "0 0" << endl;
    else if (case_num == 7) fout << rnd_ll(1, 1000) << " " << rnd_ll(1, 1000) << endl;
    else if (case_num == 8) fout << "1024 2048" << endl;       // 相邻 2 的幂
    else if (case_num == 9) fout << "1000000000 1000000000" << endl; // 相同大数
    else if (case_num == 10) fout << "1000000000 999999999" << endl;
    else if (case_num == 11) fout << "2147483647 2147483646" << endl;
    else if (case_num >= 12 && case_num <= 20) {
        fout << rnd_ll(1, 1000000000) << " " << rnd_ll(1, 1000000000) << endl;
    }
    else fout << rnd_ll(1, 1000000000) << " " << rnd_ll(1, 1000000000) << endl;
}

#endif