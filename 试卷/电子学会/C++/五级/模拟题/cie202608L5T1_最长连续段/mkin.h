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
 * 最长连续段 - 测试数据生成
 * 输入：n、m，以及 n 个正整数 a_i
 * 输出：和不超过 m 的最长连续子段长度
 * 范围：1 ≤ n ≤ 1e5，1 ≤ m ≤ 1e9，1 ≤ a_i ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260819 + case_num * 1000003);

    // ============================================================
    // Subtask 0: 样例数据 — case 1-2
    // ============================================================
    if (case_num == 1) {
        fout << "5 10" << endl;
        fout << "2 3 1 5 4" << endl;
    }
    else if (case_num == 2) {
        fout << "4 15" << endl;
        fout << "3 5 7 9" << endl;
    }
    // ============================================================
    // Subtask 1: 小规模随机 — case 3-5
    // ============================================================
    else if (case_num >= 3 && case_num <= 5) {
        int n = 10 + (case_num - 3) * 5;
        long long m = 20LL + (case_num - 3) * 30;
        fout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            if (i) fout << " ";
            fout << rnd_ll(1, 10);
        }
        fout << endl;
    }
    // ============================================================
    // Subtask 1(续): 特殊性质 — case 6-8
    // ============================================================
    else if (case_num == 6) {
        // 全 1：和 ≤ 3 的最长段长 3
        fout << "8 3" << endl;
        for (int i = 0; i < 8; i++) { if (i) fout << " "; fout << 1; }
        fout << endl;
    }
    else if (case_num == 7) {
        // 部分单元素超过 m
        fout << "5 3" << endl;
        fout << "5 2 1 9 2" << endl;
    }
    else if (case_num == 8) {
        // 全元素和 ≤ m，答案即 n
        fout << "6 100" << endl;
        fout << "1 2 3 4 5 6" << endl;
    }
    // ============================================================
    // Subtask 2: Hack 数据 — case 9-11
    // ============================================================
    else if (case_num == 9) {
        // n=1 且单元素超过 m → 0
        fout << "1 5" << endl;
        fout << "7" << endl;
    }
    else if (case_num == 10) {
        // 所有元素都超过 m → 0
        fout << "4 1" << endl;
        fout << "2 3 4 5" << endl;
    }
    else if (case_num == 11) {
        // 极大值边界：全部 1e9，m=1e9 → 最长 1
        fout << "5 1000000000" << endl;
        fout << "1000000000 1000000000 1000000000 1000000000 1000000000" << endl;
    }
    // ============================================================
    // Subtask 3: 中大规模 — case 12-20
    // ============================================================
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 1000;
        long long m = rnd_ll(1000000LL, 1000000000LL);
        fout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            if (i) fout << " ";
            fout << rnd_ll(1, 100000);
        }
        fout << endl;
    }
    // ============================================================
    // Subtask 4: 随机回归 — case 21-25
    // ============================================================
    else if (case_num == 21) {
        // 极限规模：n=1e5，全 1e5，m=1e9 → 最长 10000
        fout << "100000 1000000000" << endl;
        for (int i = 0; i < 100000; i++) { if (i) fout << " "; fout << 100000; }
        fout << endl;
    }
    else {
        // 极限规模随机：n=1e5，a_i 全值域
        long long m = rnd_ll(1, 1000000000);
        fout << "100000 " << m << endl;
        for (int i = 0; i < 100000; i++) {
            if (i) fout << " ";
            fout << rnd_ll(1, 1000000000);
        }
        fout << endl;
    }
}

#endif