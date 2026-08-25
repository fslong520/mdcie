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
 * 刷任务 - 测试数据生成
 * 输入：n、x、y，n 个 a_i，n 个 b_i
 * 输出：最坏顺序下最少完成的任务数
 * 范围：1 ≤ n ≤ 2e5，1 ≤ x、y ≤ 2e14，1 ≤ a_i、b_i ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "4 7 18" << endl;
        fout << "2 3 5 1" << endl;
        fout << "8 8 1 4" << endl;
    }
    else if (case_num == 2) {
        fout << "8 30 30" << endl;
        fout << "1 2 3 4 5 6 7 8" << endl;
        fout << "8 7 6 5 4 3 2 1" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 6 + (case_num - 3) * 5;
        long long x = rnd_ll(5, 100);
        long long y = rnd_ll(5, 100);
        fout << n << " " << x << " " << y << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 20); }
        fout << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 20); }
        fout << endl;
    }
    else if (case_num == 6) {
        // 限额极大：全部任务可完成 → n
        fout << "6 100000000000000 100000000000000" << endl;
        fout << "1 2 3 4 5 6" << endl;
        fout << "6 5 4 3 2 1" << endl;
    }
    else if (case_num == 7) {
        // 限额极小：完成 1 个任务即超
        fout << "5 1 1" << endl;
        fout << "2 3 4 5 6" << endl;
        fout << "6 5 4 3 2" << endl;
    }
    else if (case_num == 8) {
        // n=1
        fout << "1 5 5" << endl;
        fout << "3" << endl;
        fout << "3" << endl;
    }
    else if (case_num == 9) {
        // 体力很快超限，心神富余
        fout << "8 10 100000000000000" << endl;
        fout << "9 9 9 9 9 9 9 9" << endl;
        fout << "1 1 1 1 1 1 1 1" << endl;
    }
    else if (case_num == 10) {
        // 心神很快超限，体力富余
        fout << "8 100000000000000 10" << endl;
        fout << "1 1 1 1 1 1 1 1" << endl;
        fout << "9 9 9 9 9 9 9 9" << endl;
    }
    else if (case_num == 11) {
        // 全部可完成（总和 ≤ 限额）
        fout << "5 100 100" << endl;
        fout << "10 10 10 10 10" << endl;
        fout << "10 10 10 10 10" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 1000;
        long long x = rnd_ll(1, 200000000000000LL);
        long long y = rnd_ll(1, 200000000000000LL);
        fout << n << " " << x << " " << y << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
    }
    else {
        // 极限规模：n=2e5，全值域
        long long x = rnd_ll(1, 200000000000000LL);
        long long y = rnd_ll(1, 200000000000000LL);
        fout << "200000 " << x << " " << y << endl;
        for (int i = 0; i < 200000; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
        for (int i = 0; i < 200000; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
    }
}

#endif