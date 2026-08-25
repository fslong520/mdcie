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
 * 三数之和 - 测试数据生成
 * 输入：n、a、b、c 三个数列、q 与 q 个查询 x
 * 输出：每次查询 Yes/No
 * 范围：1 ≤ n ≤ 100，0 ≤ a,b,c ≤ 1e8，1 ≤ q ≤ 1e5，0 ≤ x ≤ 3e8
 * 注意：q 控制在 1e5 以内，避免 std(set 枚举)超时
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "3" << endl;
        fout << "1 2 3" << endl;
        fout << "4 5 6" << endl;
        fout << "7 8 9" << endl;
        fout << "2" << endl;
        fout << "12 20" << endl;
    }
    else if (case_num == 2) {
        fout << "4" << endl;
        fout << "0 100 200 300" << endl;
        fout << "0 50 150 250" << endl;
        fout << "0 80 180 280" << endl;
        fout << "5" << endl;
        fout << "0 430 580 630 750" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 5 + (case_num - 3) * 5;
        int q = 10 + (case_num - 3) * 20;
        fout << n << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(0, 100); }
        fout << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(0, 100); }
        fout << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(0, 100); }
        fout << endl;
        fout << q << endl;
        for (int i = 0; i < q; i++) { if (i) fout << " "; fout << rnd_ll(0, 300); }
        fout << endl;
    }
    else if (case_num == 6) {
        // 全部无解：x 极大
        int n = 10;
        fout << n << endl;
        for (int k = 0; k < 3; k++) {
            for (int i = 0; i < n; i++) { if (i) fout << " "; fout << 100000000; }
            fout << endl;
        }
        fout << "20" << endl;
        for (int i = 0; i < 20; i++) { if (i) fout << " "; fout << 300000000; }
        fout << endl;
    }
    else if (case_num == 7) {
        // 全部有解：x 恰等于某 a+b+c
        int n = 8;
        fout << n << endl;
        for (int k = 0; k < 3; k++) {
            for (int i = 0; i < n; i++) { if (i) fout << " "; fout << i; }
            fout << endl;
        }
        fout << "20" << endl;
        for (int i = 0; i < 20; i++) { if (i) fout << " "; fout << (i % 8) * 3; }
        fout << endl;
    }
    else if (case_num == 8) {
        // n=1
        fout << "1" << endl;
        fout << "5" << endl;
        fout << "6" << endl;
        fout << "7" << endl;
        fout << "10" << endl;
        fout << "18 1 100 0 5 20 19 3 200 17" << endl;
    }
    else if (case_num >= 9 && case_num <= 11) {
        // 边界：n=100, q 大（≤1e5），全值域
        int n = 100;
        int q = 20000;
        fout << n << endl;
        for (int k = 0; k < 3; k++) {
            for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(0, 100000000); }
            fout << endl;
        }
        fout << q << endl;
        for (int i = 0; i < q; i++) { if (i) fout << " "; fout << rnd_ll(0, 300000000); }
        fout << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 20 + (case_num - 12) * 8;
        int q = 2000 + (case_num - 12) * 1500;
        fout << n << endl;
        for (int k = 0; k < 3; k++) {
            for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(0, 1000000); }
            fout << endl;
        }
        fout << q << endl;
        for (int i = 0; i < q; i++) { if (i) fout << " "; fout << rnd_ll(0, 3000000); }
        fout << endl;
    }
    else {
        // 极限：n=100, q=1e5，混合值域（有解+无解混合）
        int n = 100;
        int q = 20000;
        fout << n << endl;
        for (int k = 0; k < 3; k++) {
            for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(0, 100000000); }
            fout << endl;
        }
        fout << q << endl;
        for (int i = 0; i < q; i++) { if (i) fout << " "; fout << rnd_ll(0, 300000000); }
        fout << endl;
    }
}

#endif