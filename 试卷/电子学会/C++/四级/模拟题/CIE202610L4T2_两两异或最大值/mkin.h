#pragma once

#ifndef MKIN_H
#define MKIN_H

#include <bits/stdc++.h>
using namespace std;

const int TEST_CASES = 25;

struct SubtaskDef { int id, start, end; };
const SubtaskDef SUBTASKS[] = {
    {0, 1, 3},    // 样例
    {1, 4, 8},    // 小规模 / 特殊
    {2, 9, 11},   // Hack / 边界
    {3, 12, 20},  // 常规规模
    {4, 21, 25},  // 随机回归
};
const int SUBTASK_COUNT = sizeof(SUBTASKS) / sizeof(SUBTASKS[0]);

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

// 两两异或最大值 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261008 + case_num * 1000003);
    if (case_num == 1) fout << "3\n5 3 6" << endl;
    else if (case_num == 2) fout << "4\n7 7 7 7" << endl;
    else if (case_num == 3) fout << "2\n0 0" << endl;
    else if (case_num == 4) fout << "2\n0 1000000000" << endl;
    else if (case_num == 5) fout << "2\n1000000000 1000000000" << endl;
    else if (case_num == 6) fout << "5\n1 2 4 8 16" << endl;
    else if (case_num == 7) {
        fout << 1000 << endl;
        for (int i = 0; i < 1000; i++) fout << 0 << (i == 999 ? '\n' : ' ');
    }
    else if (case_num == 8) {
        fout << 1000 << endl;
        for (int i = 0; i < 1000; i++) fout << (1 << (i % 30)) << (i == 999 ? '\n' : ' ');
    }
    else if (case_num == 9) {
        fout << 1000 << endl;
        for (int i = 0; i < 1000; i++) fout << 1000000000 << (i == 999 ? '\n' : ' ');
    }
    else if (case_num == 10) fout << "2\n2147483647 2147483646" << endl;
    else if (case_num >= 11 && case_num <= 25) {
        int n = (int)rnd_ll(2, 1000);
        fout << n << endl;
        for (int i = 0; i < n; i++)
            fout << rnd_ll(0, 1000000000) << (i == n - 1 ? '\n' : ' ');
    }
}

#endif