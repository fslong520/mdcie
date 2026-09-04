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

// 二进制间距 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261010 + case_num * 1000003);
    if (case_num == 1) fout << 22 << endl;
    else if (case_num == 2) fout << 541 << endl;
    else if (case_num == 3) fout << 8 << endl;
    else if (case_num == 4) fout << 1 << endl;          // 单个1
    else if (case_num == 5) fout << 2 << endl;          // 10
    else if (case_num == 6) fout << 3 << endl;          // 11 间距0
    else if (case_num == 7) fout << 0x15555555LL << endl; // 1010101...
    else if (case_num == 8) fout << 0x20000001LL << endl; // 首尾1 中间全0 间距29
    else if (case_num == 9) fout << 0x3FFFFFFFLL << endl; // 全1
    else if (case_num == 10) fout << 0x40000000LL << endl; // 单1
    else if (case_num == 11) fout << 1073741824 << endl;   // 2^30
    else if (case_num >= 12 && case_num <= 20) {
        fout << rnd_ll(1, 1000000000) << endl;
    } else {
        // 高间距随机
        int len = rnd_ll(10, 29);
        long long v = (1LL << len) | 1;
        int mid = rnd_ll(1, len - 1);
        v |= (1LL << mid);
        fout << v << endl;
    }
}

#endif