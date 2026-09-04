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

// 三数之和 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261103 + case_num * 1000003);
    auto rndnum = [&](int maxlen) {
        int len = (int)rnd_ll(1, maxlen);
        string s(1, char('1' + rnd_ll(0, 8)));
        for (int i = 1; i < len; i++) s += char('0' + rnd_ll(0, 9));
        return s;
    };
    if (case_num == 1) fout << "1\n2\n3" << endl;
    else if (case_num == 2) {
        string a(50, '1'), b(50, '2'), c(50, '3');
        fout << a << "\n" << b << "\n" << c << endl;
    }
    else if (case_num == 3) fout << "0\n0\n0" << endl;
    else if (case_num == 4) fout << "0\n1\n0" << endl;
    else if (case_num == 5) {
        string a(500, '9'), b(500, '9'), c(500, '9');
        fout << a << "\n" << b << "\n" << c << endl;   // 全9进位
    }
    else if (case_num == 6) {
        string a(500, '9'), b = "1", c = "1";
        fout << a << "\n" << b << "\n" << c << endl;
    }
    else if (case_num == 7) {
        string a(500, '1'), b(1, '0'), c(1, '0');
        fout << a << "\n" << b << "\n" << c << endl;
    }
    else if (case_num >= 8 && case_num <= 25) {
        fout << rndnum(500) << "\n" << rndnum(500) << "\n" << rndnum(500) << endl;
    }
}

#endif