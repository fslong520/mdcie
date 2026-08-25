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
 * 判断2的幂 - 测试数据生成
 * 输入：n，以及 n 个正整数 x
 * 输出：每个 x 是否为 2 的幂（YES/NO）
 * 范围：1 ≤ n ≤ 1000，1 ≤ x ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "4" << endl << "1 2 3 16" << endl;
    }
    else if (case_num == 2) {
        fout << "3" << endl << "5 8 100" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 8 + (case_num - 3) * 8;
        fout << n << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
    }
    else if (case_num == 6) {
        // 全部是 2 的幂
        fout << "6" << endl;
        fout << "1 2 4 8 16 32" << endl;
    }
    else if (case_num == 7) {
        // 全部不是 2 的幂（奇数）
        fout << "6" << endl;
        fout << "3 5 7 9 11 13" << endl;
    }
    else if (case_num == 8) {
        // 2^k - 1（不是）与 2^k + 1（不是）
        fout << "4" << endl;
        fout << "31 33 63 65" << endl;
    }
    else if (case_num == 9) {
        // 边界：2^29=536870912（是）、536870911（否）、1e9（否）、1（是）
        fout << "4" << endl;
        fout << "536870912 536870911 1000000000 1" << endl;
    }
    else if (case_num == 10) {
        // 大 n=1000 混合
        fout << "1000" << endl;
        for (int i = 0; i < 1000; i++) {
            if (i) fout << " ";
            if (i % 10 == 0) fout << (1LL << (rnd_ll(0, 29))) ;
            else fout << rnd_ll(1, 1000000000);
        }
        fout << endl;
    }
    else if (case_num == 11) {
        // 相邻 2^k 与 2^k+1
        fout << "8" << endl;
        fout << "1024 1023 1025 65536 65535 65537 2097152 2097151" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 100 + (case_num - 12) * 100;
        fout << n << endl;
        for (int i = 0; i < n; i++) {
            if (i) fout << " ";
            if (rnd_ll(0, 1)) fout << (1LL << rnd_ll(0, 29));
            else fout << rnd_ll(1, 1000000000);
        }
        fout << endl;
    }
    else {
        // n=1000 随机回归
        fout << "1000" << endl;
        for (int i = 0; i < 1000; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
    }
}

#endif