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
 * 高精度除法 - 测试数据生成
 * 输入：a（大整数，≤1000 位），b（1≤b≤1e9）
 * 输出：商、余数（两行）
 * 范围：|a| ≤ 1000 位，1 ≤ b ≤ 1e9
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

    if (case_num == 1) fout << "1000\n3\n";
    else if (case_num == 2) fout << "123456789012345678901234567890\n2\n";
    else if (case_num == 3) fout << "1\n1\n";
    else if (case_num == 4) fout << "0\n5\n";              // 商 0 余 0
    else if (case_num == 5) fout << "100\n3\n";            // 商 33 余 1
    else if (case_num == 6) fout << "99999999999999999999\n1000000000\n";
    else if (case_num == 7) fout << "123456789\n7\n";
    else if (case_num == 8) fout << "11111111111111111111\n3\n";
    else if (case_num == 9) fout << "1\n1000000000\n";     // a<b 商 0
    else if (case_num == 10) fout << string(1000, '9') << "\n9\n";
    else if (case_num == 11) fout << string(1000, '1') << "\n999999937\n";
    else if (case_num >= 12 && case_num <= 20) {
        int len = 50 + (case_num - 12) * 90;
        fout << rnd_num(len) << "\n" << rnd_ll(1, 1000000000) << "\n";
    }
    else fout << rnd_num(1000) << "\n" << rnd_ll(1, 1000000000) << "\n";
}

#endif