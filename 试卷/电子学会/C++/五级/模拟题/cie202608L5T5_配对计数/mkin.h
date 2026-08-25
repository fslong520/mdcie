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
 * 配对计数 - 测试数据生成
 * 输入：n、t，以及 n 个严格升序正整数 a_i
 * 输出：满足 a[i]+a[j]=t (i<j) 的数对个数
 * 范围：1 ≤ n ≤ 1e5，1 ≤ t ≤ 2e9，1 ≤ a_i ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260819 + case_num * 1000003);

    if (case_num == 1) {
        fout << "5 10" << endl;
        fout << "1 2 3 7 8" << endl;
    }
    else if (case_num == 2) {
        fout << "4 6" << endl;
        fout << "1 2 4 5" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        // 小规模：随机升序
        int n = 8 + (case_num - 3) * 6;
        vector<long long> v(n);
        v[0] = rnd_ll(1, 20);
        for (int i = 1; i < n; i++) v[i] = v[i - 1] + rnd_ll(1, 20);
        long long t = rnd_ll(2, v[n - 1] + v[n - 2]);
        fout << n << " " << t << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << v[i]; }
        fout << endl;
    }
    else if (case_num == 6) {
        // 无任何配对的极端：t 大于最大两数和
        fout << "5 100" << endl;
        fout << "1 2 3 7 8" << endl;
    }
    else if (case_num == 7) {
        // 恰好一对在两端
        fout << "6 21" << endl;
        fout << "1 4 7 10 13 20" << endl;
    }
    else if (case_num == 8) {
        // 全部成对（对称数列）
        fout << "6 11" << endl;
        fout << "1 2 3 8 9 10" << endl;
    }
    else if (case_num == 9) {
        // n=1 → 0
        fout << "1 5" << endl;
        fout << "3" << endl;
    }
    else if (case_num == 10) {
        // t 极大无解（最大两数和 < t），数组严格升序
        fout << "4 2000000000" << endl;
        fout << "999999990 999999995 999999999 1000000000" << endl;
    }
    else if (case_num == 11) {
        // 相邻差 1 的连续数列
        int n = 10;
        fout << n << " " << (n + 1) << endl;
        for (int i = 1; i <= n; i++) { if (i > 1) fout << " "; fout << i; }
        fout << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 1000;
        vector<long long> v(n);
        v[0] = rnd_ll(1, 1000);
        for (int i = 1; i < n; i++) v[i] = v[i - 1] + rnd_ll(1, 1000);
        long long t = rnd_ll(2, v[n - 1] + v[n - 2]);
        fout << n << " " << t << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << v[i]; }
        fout << endl;
    }
    else {
        // 极限规模：n=1e5，升序增量随机，值域逼近 1e9
        int n = 100000;
        vector<long long> v(n);
        v[0] = rnd_ll(1, 10000);
        for (int i = 1; i < n; i++) v[i] = v[i - 1] + rnd_ll(1, 10000);
        long long t = rnd_ll(2, v[n - 1] + v[n - 2]);
        fout << n << " " << t << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << v[i]; }
        fout << endl;
    }
}

#endif