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
 * 只出现一次的数字 - 测试数据生成
 * 输入：n（奇数），n 个整数
 * 输出：出现奇数次的数
 * 范围：1 ≤ n ≤ 1e5，|整数| ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) fout << "5\n1 2 1 3 2\n";
    else if (case_num == 2) fout << "3\n7 7 9\n";
    else if (case_num == 3) fout << "1\n42\n";
    else if (case_num == 4) fout << "5\n0 0 0 0 5\n";
    else if (case_num == 5) fout << "7\n-1 -1 3 -2 -2 3 5\n";
    else if (case_num == 6) fout << "9\n1000000000 1000000000 -1000000000 -1000000000 7 1 2 1 2\n";
    else if (case_num == 7) fout << "11\n5 5 5 5 3 3 9 9 9 9 8\n";
    else if (case_num == 8) fout << "13\n1 1 2 2 3 3 4 4 5 5 6 6 7\n";
    else if (case_num == 9) {  // 大 n：100000 对 + 1 个奇数
        fout << "100001\n";
        for (int i = 0; i < 50000; i++) { if (i) fout << " "; fout << i << " " << i; }
        fout << " 777\n";
    }
    else if (case_num == 10) fout << "3\n-1000000000 1000000000 7\n";
    else if (case_num == 11) fout << "1\n0\n";
    else if (case_num >= 12 && case_num <= 20) {
        int n = (case_num - 12) * 1000 + 1;
        fout << n << "\n";
        long long odd = rnd_ll(-1000000000, 1000000000);
        for (int i = 0; i < n - 1; i++) {
            if (i) fout << " ";
            fout << rnd_ll(-1000000000, 1000000000);
        }
        fout << " " << odd << "\n";
    }
    else {
        // n=100001 大：成对 + 1
        fout << "100001\n";
        for (int i = 0; i < 50000; i++) {
            if (i) fout << " ";
            fout << i << " " << i;
        }
        fout << " 12345\n";
    }
}

#endif