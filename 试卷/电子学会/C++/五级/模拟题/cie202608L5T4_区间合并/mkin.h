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
 * 区间合并 - 测试数据生成
 * 输入：n，以及 n 个闭区间 [l_i, r_i]
 * 输出：合并重叠/相邻区间后的区间个数
 * 范围：1 ≤ n ≤ 1e5，1 ≤ l_i ≤ r_i ≤ 1e9
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260819 + case_num * 1000003);

    if (case_num == 1) {
        fout << "4" << endl;
        fout << "1 3" << endl;
        fout << "2 6" << endl;
        fout << "8 10" << endl;
        fout << "15 18" << endl;
    }
    else if (case_num == 2) {
        fout << "3" << endl;
        fout << "1 4" << endl;
        fout << "4 5" << endl;
        fout << "6 7" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 8 + (case_num - 3) * 6;
        fout << n << endl;
        for (int i = 0; i < n; i++) {
            long long l = rnd_ll(1, 100);
            long long r = rnd_ll(l, 100);
            fout << l << " " << r << endl;
        }
    }
    else if (case_num == 6) {
        // 全部重叠 → 1
        fout << "6" << endl;
        for (int i = 0; i < 6; i++) fout << "1 100" << endl;
    }
    else if (case_num == 7) {
        // 全部分离 → n
        fout << "5" << endl;
        fout << "1 1" << endl;
        fout << "3 3" << endl;
        fout << "5 5" << endl;
        fout << "7 7" << endl;
        fout << "9 9" << endl;
    }
    else if (case_num == 8) {
        // 链式相邻合并：1-2、2-3、3-4 … 全部并为一个
        fout << "5" << endl;
        fout << "1 2" << endl;
        fout << "2 3" << endl;
        fout << "3 4" << endl;
        fout << "4 5" << endl;
        fout << "5 6" << endl;
    }
    else if (case_num == 9) {
        // n=1
        fout << "1" << endl;
        fout << "2 9" << endl;
    }
    else if (case_num == 10) {
        // 输入乱序（考验排序）：分离区间打乱
        fout << "5" << endl;
        fout << "20 30" << endl;
        fout << "1 5" << endl;
        fout << "10 15" << endl;
        fout << "40 50" << endl;
        fout << "6 9" << endl;
    }
    else if (case_num == 11) {
        // 单点区间密集交错
        fout << "7" << endl;
        fout << "3 3" << endl;
        fout << "1 1" << endl;
        fout << "2 2" << endl;
        fout << "3 4" << endl;
        fout << "4 4" << endl;
        fout << "5 5" << endl;
        fout << "3 6" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 1000;
        fout << n << endl;
        for (int i = 0; i < n; i++) {
            long long l = rnd_ll(1, 1000000000);
            long long r = rnd_ll(l, 1000000000);
            fout << l << " " << r << endl;
        }
    }
    else {
        // 极限规模：n=1e5 随机区间
        fout << "100000" << endl;
        for (int i = 0; i < 100000; i++) {
            long long l = rnd_ll(1, 1000000000);
            long long r = rnd_ll(l, 1000000000);
            fout << l << " " << r << endl;
        }
    }
}

#endif