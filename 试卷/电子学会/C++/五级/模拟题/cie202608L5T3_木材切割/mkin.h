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
 * 木材切割 - 测试数据生成
 * 输入：n、k，以及 n 个正整数 a_i
 * 输出：可锯出 k 段等长小木段的最大长度
 * 范围：1 ≤ n ≤ 1e5，1 ≤ k ≤ 1e9，1 ≤ a_i ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260819 + case_num * 1000003);

    if (case_num == 1) {
        fout << "3 7" << endl;
        fout << "10 15 8" << endl;
    }
    else if (case_num == 2) {
        fout << "1 3" << endl;
        fout << "10" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        // 小规模随机：k ≤ n 保证有解
        int n = 5 + (case_num - 3) * 5;
        long long k = rnd_ll(1, n);
        fout << n << " " << k << endl;
        for (int i = 0; i < n; i++) {
            if (i) fout << " ";
            fout << rnd_ll(1, 100);
        }
        fout << endl;
    }
    else if (case_num == 6) {
        // k=1：答案为最大段长
        fout << "4 1" << endl;
        fout << "3 9 5 7" << endl;
    }
    else if (case_num == 7) {
        // k 大于总长度（无法锯出）→ 0
        fout << "3 1000" << endl;
        fout << "10 15 8" << endl;
    }
    else if (case_num == 8) {
        // 全部相等：答案恰整除
        fout << "5 10" << endl;
        fout << "100 100 100 100 100" << endl;
    }
    else if (case_num == 9) {
        // n=1，k 大，整除边界
        fout << "1 1000000000" << endl;
        fout << "1000000000" << endl;
    }
    else if (case_num == 10) {
        // 最小段长 1
        fout << "3 100000" << endl;
        fout << "1 1 1" << endl;
    }
    else if (case_num == 11) {
        // 全 1e9：二分上界巨大
        fout << "100000 50000" << endl;
        for (int i = 0; i < 100000; i++) { if (i) fout << " "; fout << 1000000000; }
        fout << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 1000;
        long long k = rnd_ll(1, 1000);
        fout << n << " " << k << endl;
        for (int i = 0; i < n; i++) {
            if (i) fout << " ";
            fout << rnd_ll(1, 1000000);
        }
        fout << endl;
    }
    else {
        // 极限规模：n=1e5，k 随机大值
        long long k = rnd_ll(1, 1000000000);
        fout << "100000 " << k << endl;
        for (int i = 0; i < 100000; i++) {
            if (i) fout << " ";
            fout << rnd_ll(1, 1000000000);
        }
        fout << endl;
    }
}

#endif