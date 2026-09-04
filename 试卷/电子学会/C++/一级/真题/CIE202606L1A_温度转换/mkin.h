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

// 温度转换 - 测试数据生成
// 输入：一个两位小数 C
// 输出：F = C*9/5+32，保留两位小数
// 范围：|C| ≤ 1000

void test(int case_num, ofstream& fout)
{
    srand(20260904 + case_num * 1000003);

    if (case_num == 1) fout << "0.00" << endl;
    else if (case_num == 2) fout << "37.50" << endl;
    else if (case_num == 3) fout << "-40.00" << endl;
    else if (case_num == 4) fout << "100.00" << endl;
    else if (case_num == 5) fout << "-273.15" << endl;        // 绝对零度
    else if (case_num == 6) fout << "36.60" << endl;
    else if (case_num == 7) fout << "-0.01" << endl;
    else if (case_num == 8) fout << "0.01" << endl;
    else if (case_num == 9) fout << "1000.00" << endl;        // 上界
    else if (case_num == 10) fout << "-1000.00" << endl;      // 下界
    else if (case_num == 11) fout << "999.99" << endl;
    else if (case_num >= 12 && case_num <= 20) {
        // 随机两位小数：整数部分 ±1000，小数 00-99
        long long ip = rnd_ll(-1000, 999);
        long long fp = rnd_ll(0, 99);
        if (case_num % 3 == 0) ip = rnd_ll(-1000, -1); // 保证负数覆盖
        fout << ip << "." << (fp < 10 ? "0" : "") << fp << endl;
    }
    else {
        long long ip = rnd_ll(-1000, 999);
        long long fp = rnd_ll(0, 99);
        fout << ip << "." << (fp < 10 ? "0" : "") << fp << endl;
    }
}

#endif