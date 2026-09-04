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

// 大数乘个位 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261009 + case_num * 1000003);
    if (case_num == 1) fout << "99999999999999999999\n9" << endl;
    else if (case_num == 2) fout << "123456789\n0" << endl;
    else if (case_num == 3) fout << "0\n5" << endl;
    else if (case_num == 4) fout << "1\n1" << endl;
    else if (case_num == 5) fout << "100000000000000000000\n1" << endl;  // 200位内
    else if (case_num == 6) fout << "99999999999999999999999999999999999999999999999999\n9" << endl; // 50个9
    else if (case_num == 7) fout << "123456789\n1" << endl;
    else if (case_num == 8) fout << "5\n2" << endl;
    else {
        int len = (int)rnd_ll(1, 200);
        string s(1, char('1' + rnd_ll(0, 8)));
        for (int i = 1; i < len; i++) s += char('0' + rnd_ll(0, 9));
        fout << s << "\n" << rnd_ll(0, 9) << endl;
    }
}

#endif