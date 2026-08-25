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
 * 三数之和（高精加） - 测试数据生成
 * 输入：三个非负整数 a、b、c（各一行）
 * 输出：a+b+c 的和
 * 范围：0 ≤ a,b,c ≤ 10^1000
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

string rnd_num(int len) {
    if (len == 1) return string(1, char('0' + rnd_ll(0, 9)));
    string s;
    s += char('1' + rnd_ll(0, 9));
    for (int i = 1; i < len; i++) s += char('0' + rnd_ll(0, 9));
    return s;
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) { fout << "1\n2\n3\n"; }
    else if (case_num == 2) {
        fout << "111111111111111111111111111111111111111111111111111\n";
        fout << "222222222222222222222222222222222222222222222222222\n";
        fout << "333333333333333333333333333333333333333333333333333\n";
    }
    else if (case_num == 3) { fout << "0\n0\n0\n"; }
    else if (case_num == 4) { fout << "0\n0\n5\n"; }
    else if (case_num == 5) { fout << "9\n1\n0\n"; }
    else if (case_num == 6) { fout << "999\n1\n999\n"; }
    else if (case_num == 7) { fout << rnd_num(10) << "\n" << rnd_num(10) << "\n" << rnd_num(10) << "\n"; }
    else if (case_num == 8) { fout << "12345678901234567890\n98765432109876543210\n11111111111111111111\n"; }
    else if (case_num == 9) { fout << string(500, '9') << "\n" << string(500, '9') << "\n" << string(500, '9') << "\n"; }
    else if (case_num == 10) { fout << "1\n" << string(1000, '9') << "\n0\n"; }
    else if (case_num == 11) { fout << string(1000, '9') << "\n1\n" << string(1000, '9') << "\n"; }
    else if (case_num >= 12 && case_num <= 20) {
        int len = 50 + (case_num - 12) * 50;
        fout << rnd_num(len) << "\n" << rnd_num(len) << "\n" << rnd_num(len) << "\n";
    }
    else {
        fout << rnd_num(1000) << "\n" << rnd_num(1000) << "\n" << rnd_num(1000) << "\n";
    }
}

#endif