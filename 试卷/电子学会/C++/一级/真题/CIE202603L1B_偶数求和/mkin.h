#pragma once

#ifndef MKIN_H
#define MKIN_H

#include <bits/stdc++.h>
using namespace std;

const int TEST_CASES = 25;

struct SubtaskDef {
    int id, start, end;
};
const SubtaskDef SUBTASKS[] = {
    {0, 1, 3},    // 样例
    {1, 4, 8},    // 小规模 + 特殊性质
    {2, 9, 11},   // Hack 数据
    {3, 12, 20},  // 中大规模
    {4, 21, 25},  // 随机回归
};
const int SUBTASK_COUNT = sizeof(SUBTASKS) / sizeof(SUBTASKS[0]);

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

// 偶数求和 - 测试数据生成
// 输入：两个整数 a、b
// 输出：区间内偶数之和
// 范围：-10000 ≤ a ≤ b ≤ 10000

void test(int case_num, ofstream& fout)
{
    srand(20260904 + case_num * 1000003);

    if (case_num == 1) fout << "1 10" << endl;
    else if (case_num == 2) fout << "-10 10" << endl;
    else if (case_num == 3) fout << "-10 -2" << endl;
    else if (case_num == 4) fout << "2 2" << endl;            // 单点偶数
    else if (case_num == 5) fout << "3 3" << endl;            // 单点奇数
    else if (case_num == 6) fout << "0 0" << endl;
    else if (case_num == 7) fout << "-1 1" << endl;
    else if (case_num == 8) fout << "-1 2" << endl;
    else if (case_num == 9) fout << "-10000 10000" << endl;   // 全域
    else if (case_num == 10) fout << "10000 10000" << endl;   // 上界单点
    else if (case_num == 11) fout << "-10000 -10000" << endl; // 下界单点
    else if (case_num >= 12 && case_num <= 20) {
        long long a = rnd_ll(-10000, 9999);
        long long b = rnd_ll(a + 1, 10000);
        fout << a << " " << b << endl;
    }
    else {
        long long a = rnd_ll(-10000, 9999);
        long long b = rnd_ll(a + 1, 10000);
        fout << a << " " << b << endl;
    }
}

#endif