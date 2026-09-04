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

// 十六进制转二进制 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261008 + case_num * 1000003);
    if (case_num == 1) fout << "2A" << endl;
    else if (case_num == 2) fout << "1B" << endl;
    else if (case_num == 3) fout << "F" << endl;
    else if (case_num == 4) fout << "0" << endl;
    else if (case_num == 5) fout << "10" << endl;        // 前导零来源
    else if (case_num == 6) fout << "A" << endl;
    else if (case_num == 7) fout << "FF" << endl;
    else if (case_num == 8) fout << "100" << endl;
    else if (case_num == 9) fout << "FFFFFFFF" << endl;  // 上界
    else if (case_num == 10) fout << "80000000" << endl; // 最高位1
    else if (case_num == 11) fout << "ABCDEF01" << endl;
    else if (case_num >= 12 && case_num <= 20) {
        int len = rnd_ll(2, 8);
        string s;
        const char *dig = "0123456789ABCDEF";
        for (int i = 0; i < len; i++) s += dig[rnd_ll(0, 15)];
        // 去前导零
        size_t p = s.find_first_not_of('0');
        if (p == string::npos) s = "0"; else s = s.substr(p);
        fout << s << endl;
    } else {
        string s;
        const char *dig = "0123456789ABCDEF";
        for (int i = 0; i < 8; i++) s += dig[rnd_ll(0, 15)];
        size_t p = s.find_first_not_of('0');
        if (p == string::npos) s = "0"; else s = s.substr(p);
        fout << s << endl;
    }
}

#endif