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

// 十六进制下的大数 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261101 + case_num * 1000003);
    if (case_num == 1) fout << "255 16" << endl;
    else if (case_num == 2) fout << "123456789 987654321" << endl;
    else if (case_num == 3) fout << "1 1" << endl;
    else if (case_num == 4) fout << "9999999999 9999999999" << endl; // 边界
    else if (case_num == 5) fout << "1 9999999999" << endl;
    else if (case_num == 6) fout << "16 255" << endl;
    else if (case_num == 7) fout << "2 3" << endl;
    else if (case_num == 8) fout << "65536 4096" << endl;           // 2^20 = 100000
    else if (case_num == 9) fout << "1000000000 1000000000" << endl;
    else if (case_num == 10) fout << "10 1" << endl;
    else if (case_num == 11) fout << "9999999998 9999999997" << endl;
    else if (case_num >= 12 && case_num <= 20) {
        fout << rnd_ll(1, 9999999999LL) << " " << rnd_ll(1, 9999999999LL) << endl;
    } else {
        fout << rnd_ll(1000000000, 9999999999LL) << " " << rnd_ll(1000000000, 9999999999LL) << endl;
    }
}

#endif