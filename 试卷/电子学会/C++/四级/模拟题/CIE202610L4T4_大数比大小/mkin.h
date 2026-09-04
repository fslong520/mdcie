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

// 大数比大小 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261010 + case_num * 1000003);
    auto rndnum = [&](int maxlen) {
        int len = (int)rnd_ll(1, maxlen);
        string s(1, char('1' + rnd_ll(0, 8)));
        for (int i = 1; i < len; i++) s += char('0' + rnd_ll(0, 9));
        return s;
    };
    if (case_num == 1) fout << "123456789123456789123456789 99999999999999999999999999" << endl;
    else if (case_num == 2) fout << "100 99" << endl;
    else if (case_num == 3) fout << "1000 1000" << endl;
    else if (case_num == 4) fout << "0 0" << endl;
    else if (case_num == 5) fout << "0 1" << endl;
    else if (case_num == 6) fout << "1 0" << endl;
    else if (case_num == 7) fout << "10 9" << endl;       // 位数同前导差异
    else if (case_num == 8) fout << "99 100" << endl;
    else if (case_num == 9) {
        string s = rndnum(200);
        fout << s << " " << s << endl;                    // 相等大数
    }
    else if (case_num == 10) {
        string s = rndnum(200);
        fout << s << " " << s.substr(0, s.size() - 1) << endl;  // 长度差一
    }
    else if (case_num >= 11 && case_num <= 25) {
        fout << rndnum(200) << " " << rndnum(200) << endl;
    }
}

#endif