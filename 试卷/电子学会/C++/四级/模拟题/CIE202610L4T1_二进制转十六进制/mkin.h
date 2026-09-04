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

// 二进制转十六进制 - 测试数据生成
// 输入：二进制串（无前导零）
void test(int case_num, ofstream& fout)
{
    srand(20261007 + case_num * 1000003);
    if (case_num == 1) fout << "11011" << endl;
    else if (case_num == 2) fout << "101010" << endl;
    else if (case_num == 3) fout << "0" << endl;
    else if (case_num == 4) fout << "1" << endl;                    // 最短
    else if (case_num == 5) fout << "1111" << endl;                 // 恰4位
    else if (case_num == 6) fout << "11111" << endl;                // 5位
    else if (case_num == 7) fout << "1111111111111111" << endl;     // 16个1 = FFFF
    else if (case_num == 8) fout << "100000000" << endl;            // 1后8个0 = 100
    else if (case_num == 9) fout << "11111111111111111111111111111111" << endl; // 32个1 = FFFFFFFF
    else if (case_num == 10) fout << "10000000000000000000000000000000" << endl; // 1后31个0
    else if (case_num == 11) fout << "10101110111011101110111011101110" << endl;
    else if (case_num >= 12 && case_num <= 20) {
        int len = rnd_ll(2, 32);
        string s(1, '1');
        for (int i = 1; i < len; i++) s += (rnd_ll(0, 1) ? '1' : '0');
        fout << s << endl;
    } else {
        int len = rnd_ll(1, 32);
        string s(1, '1');
        for (int i = 1; i < len; i++) s += (rnd_ll(0, 1) ? '1' : '0');
        fout << s << endl;
    }
}

#endif