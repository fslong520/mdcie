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
 * 能量节点 - 测试数据生成
 * 输入：n、d，以及 n 个坐标 x_i
 * 输出：距离 ≤ d 的点对个数
 * 范围：1 ≤ n ≤ 1e5，1 ≤ d、x_i ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "4 25" << endl;
        fout << "30 40 10 20" << endl;
    }
    else if (case_num == 2) {
        fout << "3 2" << endl;
        fout << "1 5 9" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 5 + (case_num - 3) * 5;
        long long d = rnd_ll(1, 50);
        fout << n << " " << d << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 100); }
        fout << endl;
    }
    else if (case_num == 6) {
        // 全相同坐标：任意两点距离 0 ≤ d，全对
        fout << "6 0" << endl;
        fout << "7 7 7 7 7 7" << endl;
    }
    else if (case_num == 7) {
        // d 很小且坐标稀疏：0 对
        fout << "5 1" << endl;
        fout << "1 10 20 30 40" << endl;
    }
    else if (case_num == 8) {
        // d 极大：全对 n(n-1)/2
        fout << "4 1000000000" << endl;
        fout << "1 100 200 300" << endl;
    }
    else if (case_num == 9) {
        // n=1 → 0
        fout << "1 100" << endl;
        fout << "5" << endl;
    }
    else if (case_num == 10) {
        // n=2 恰好在边界内 → 1
        fout << "2 4" << endl;
        fout << "5 9" << endl;
    }
    else if (case_num == 11) {
        // 大坐标 1e9 附近
        fout << "3 1000000000" << endl;
        fout << "999999990 999999995 1000000000" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 1000;
        long long d = rnd_ll(1, 1000000000);
        fout << n << " " << d << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
    }
    else {
        // 极限规模：n=1e5
        long long d = rnd_ll(1, 1000000000);
        fout << "100000 " << d << endl;
        for (int i = 0; i < 100000; i++) { if (i) fout << " "; fout << rnd_ll(1, 1000000000); }
        fout << endl;
    }
}

#endif