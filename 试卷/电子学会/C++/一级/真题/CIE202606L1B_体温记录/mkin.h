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

// 体温记录 - 测试数据生成
// 输入：N；W；N-1 个变化量 Ai
// 输出：体温 [3600,3700] 的天数
// 范围：2 ≤ N ≤ 1000，1 ≤ W ≤ 100000，-100000 ≤ Ai ≤ 100000

void test(int case_num, ofstream& fout)
{
    srand(20260904 + case_num * 1000003);

    if (case_num == 1) fout << "5\n3500\n50 30 20 40" << endl;
    else if (case_num == 2) fout << "5\n3800\n-100 -50 0 -100" << endl;
    else if (case_num == 3) fout << "2\n3600\n100" << endl;
    else if (case_num == 4) { // N=2，恰在边界
        fout << "2\n3600\n100" << endl;
    }
    else if (case_num == 5) { // 全程正常
        fout << "6\n3600\n50 50 50 50 50" << endl;
    }
    else if (case_num == 6) { // 全程不正常（偏低）
        fout << "6\n1000\n10 10 10 10 10" << endl;
    }
    else if (case_num == 7) { // 边界往复 3599/3701
        fout << "6\n3599\n1 102 1 102 1" << endl; // 3599 3600 3702 3703 3805 3806
    }
    else if (case_num == 8) { // 单步穿越：第2天起每步+50
        fout << "10\n3400\n50 50 50 50 50 50 50 50 50" << endl;
    }
    else if (case_num == 9) { // N=2 极端变化量
        fout << "2\n1\n-100000" << endl; // 体温可跌到负值
    }
    else if (case_num == 10) { // N=1000 极限摆动
        fout << 1000 << "\n100000\n";
        for (int i = 0; i < 999; i++) {
            fout << (i % 2 == 0 ? -63000 : 63000);
            fout << (i == 998 ? '\n' : ' ');
        }
    }
    else if (case_num == 11) { // N=2 恰跨入正常
        fout << "2\n3700\n1" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        long long n = rnd_ll(2, 1000);
        long long w = rnd_ll(1, 100000);
        fout << n << "\n" << w << "\n";
        for (long long i = 0; i < n - 1; i++) {
            fout << rnd_ll(-100000, 100000);
            fout << (i == n - 2 ? '\n' : ' ');
        }
    }
    else {
        long long n = rnd_ll(2, 1000);
        long long w = rnd_ll(3000, 4200); // 贴近正常区
        fout << n << "\n" << w << "\n";
        for (long long i = 0; i < n - 1; i++) {
            fout << rnd_ll(-200, 200);
            fout << (i == n - 2 ? '\n' : ' ');
        }
    }
}

#endif