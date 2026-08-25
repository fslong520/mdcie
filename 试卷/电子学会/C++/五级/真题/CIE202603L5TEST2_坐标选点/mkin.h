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
 * 坐标选点 - 测试数据生成
 * 输入：n、c、m，以及 n 个城市距离 a_i
 * 输出：最小相邻距离的最大可能值
 * 范围：1 ≤ c ≤ n ≤ 1e6，1 ≤ a_i < m ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "5 3 10" << endl;
        fout << "1 2 8 4 9" << endl;
    }
    else if (case_num == 2) {
        fout << "4 2 20" << endl;
        fout << "3 7 12 18" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 6 + (case_num - 3) * 4;
        int c = rnd_ll(1, n);
        long long m = 50 + (case_num - 3) * 50;
        fout << n << " " << c << " " << m << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, m - 1); }
        fout << endl;
    }
    else if (case_num == 6) {
        // c=n 全部建站
        int n = 10;
        fout << n << " " << n << " 100" << endl;
        fout << "1 11 21 31 41 51 61 71 81 91" << endl;
    }
    else if (case_num == 7) {
        // c=1 只建一座中间站
        int n = 8;
        fout << n << " 1 100" << endl;
        fout << "10 20 30 40 60 70 80 90" << endl;
    }
    else if (case_num == 8) {
        // 城市高度聚集
        int n = 10;
        fout << n << " 5 100" << endl;
        fout << "1 2 3 4 5 96 97 98 99 100" << endl;
    }
    else if (case_num == 9) {
        // 大 m 小 n
        fout << "5 2 1000000000" << endl;
        fout << "100000000 400000000 700000000 900000000 999999999" << endl;
    }
    else if (case_num == 10) {
        // n=1, c=1
        fout << "1 1 1000" << endl;
        fout << "500" << endl;
    }
    else if (case_num == 11) {
        // 极限 n=1e6 简版（生成部分验证性能）
        int n = 1000000;
        fout << n << " 500000 1000000000" << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, 999999999); }
        fout << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 2000;
        int c = rnd_ll(1, n);
        long long m = rnd_ll(1000000, 1000000000);
        fout << n << " " << c << " " << m << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, m - 1); }
        fout << endl;
    }
    else {
        // 极限规模：n=1e6
        int n = 1000000;
        int c = rnd_ll(1, n);
        long long m = rnd_ll(1000000, 1000000000);
        fout << n << " " << c << " " << m << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << rnd_ll(1, m - 1); }
        fout << endl;
    }
}

#endif