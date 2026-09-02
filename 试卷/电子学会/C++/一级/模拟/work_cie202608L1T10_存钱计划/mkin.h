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
 * 存钱计划 - 测试数据生成
 * 输入：n（1≤n≤30）
 * 输出：sum = 2^n - 1（1 + 2 + 4 + ... + 2^(n-1)）
 */

void test(int case_num, ofstream& fout)
{
    // ============================================================
    // Subtask 0: 样例数据 — case 1-2
    // ============================================================
    if (case_num == 1) {
        fout << 3 << endl;
    }
    else if (case_num == 2) {
        fout << 4 << endl;
    }
    // ============================================================
    // Subtask 1: 小规模 + 特殊性质 — case 3-8
    // ============================================================
    else if (case_num == 3) {
        fout << 1 << endl;  // 最小 n=1
    }
    else if (case_num == 4) {
        fout << 2 << endl;  // n=2
    }
    else if (case_num == 5) {
        fout << 5 << endl;
    }
    else if (case_num == 6) {
        fout << 6 << endl;
    }
    else if (case_num == 7) {
        fout << 10 << endl;
    }
    else if (case_num == 8) {
        fout << 20 << endl;
    }
    // ============================================================
    // Subtask 2: Hack 数据 — case 9-11
    // ============================================================
    else if (case_num == 9) {
        fout << 30 << endl; // Hack：最大值 1073741823，考 long long
    }
    else if (case_num == 10) {
        fout << 29 << endl;
    }
    else if (case_num == 11) {
        fout << 25 << endl;
    }
    // ============================================================
    // Subtask 3: 中大规模 — case 12-20
    // ============================================================
    else if (case_num >= 12 && case_num <= 20) {
        int n = rand() % 16 + 15; // 15~30
        fout << n << endl;
    }
    // ============================================================
    // Subtask 4: 随机回归 — case 21-25
    // ============================================================
    else {
        int n = rand() % 30 + 1; // 1~30
        fout << n << endl;
    }
}

#endif
