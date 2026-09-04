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

// 进制查表机 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261102 + case_num * 1000003);
    if (case_num == 1) fout << "2 101010" << endl;
    else if (case_num == 2) fout << "16 FF" << endl;
    else if (case_num == 3) fout << "16 0" << endl;
    else if (case_num == 4) fout << "2 0" << endl;
    else if (case_num == 5) fout << "2 11111111111111111111111111111111" << endl; // 32个1
    else if (case_num == 6) fout << "16 ABCDEF01" << endl;
    else if (case_num == 7) fout << "2 10000000000000000000000000000000" << endl;
    else if (case_num == 8) fout << "16 FFFFFFFF" << endl;
    else if (case_num == 9) fout << "16 10" << endl;
    else if (case_num == 10) fout << "2 1" << endl;
    else if (case_num == 11) fout << "16 1" << endl;
    else if (case_num >= 12 && case_num <= 20) {
        if (rnd_ll(0, 1)) {
            int len = rnd_ll(1, 32);
            string s(1, '1');
            for (int i = 1; i < len; i++) s += (rnd_ll(0, 1) ? '1' : '0');
            fout << "2 " << s << endl;
        } else {
            const char *dig = "0123456789ABCDEF";
            string s(1, dig[1 + rnd_ll(0, 14)]);
            int len = rnd_ll(1, 7);
            for (int i = 0; i < len; i++) s += dig[rnd_ll(0, 15)];
            fout << "16 " << s << endl;
        }
    } else {
        if (rnd_ll(0, 1)) {
            int len = rnd_ll(2, 30);
            string s(1, '1');
            for (int i = 1; i < len; i++) s += (rnd_ll(0, 1) ? '1' : '0');
            fout << "2 " << s << endl;
        } else {
            const char *dig = "0123456789ABCDEF";
            string s(1, dig[1 + rnd_ll(0, 14)]);
            for (int i = 0; i < rnd_ll(0, 6); i++) s += dig[rnd_ll(0, 15)];
            fout << "16 " << s << endl;
        }
    }
}

#endif