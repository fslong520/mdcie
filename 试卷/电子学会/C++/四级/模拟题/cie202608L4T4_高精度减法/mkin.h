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
 * 高精度减法 - 测试数据生成
 * 输入：两个正整数 a、b（无前导 0）
 * 输出：a-b（可为负）
 * 范围：长度 ≤ 500
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

string rnd_num(int len) {
    string s;
    s += char('1' + rnd_ll(0, 9));
    for (int i = 1; i < len; i++) s += char('0' + rnd_ll(0, 9));
    return s;
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) fout << "1000\n1\n";
    else if (case_num == 2) fout << "1\n1000\n";
    else if (case_num == 3) fout << "999999999999999999999999999999\n1\n";
    else if (case_num == 4) fout << "5\n5\n";              // 0
    else if (case_num == 5) fout << "1\n1\n";              // 0
    else if (case_num == 6) fout << "10\n1\n";             // 9
    else if (case_num == 7) fout << "123456789\n987654321\n";
    else if (case_num == 8) fout << rnd_num(20) << "\n" << rnd_num(20) << "\n";
    else if (case_num == 9) fout << string(500, '9') << "\n1\n";
    else if (case_num == 10) fout << "1\n" << string(500, '9') << "\n";
    else if (case_num == 11) fout << string(500, '9') << "\n" << string(500, '9') << "\n"; // 0
    else if (case_num >= 12 && case_num <= 20) {
        int len = 50 + (case_num - 12) * 40;
        fout << rnd_num(len) << "\n" << rnd_num(len) << "\n";
    }
    else fout << rnd_num(500) << "\n" << rnd_num(500) << "\n";
}

#endif