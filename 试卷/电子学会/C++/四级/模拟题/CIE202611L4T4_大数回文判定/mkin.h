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

// 大数回文判定 - 测试数据生成
void test(int case_num, ofstream& fout)
{
    srand(20261104 + case_num * 1000003);
    if (case_num == 1) fout << "1234554321" << endl;
    else if (case_num == 2) fout << "123456789" << endl;
    else if (case_num == 3) fout << "0" << endl;
    else if (case_num == 4) fout << "7" << endl;
    else if (case_num == 5) fout << "10" << endl;
    else if (case_num == 6) fout << "11" << endl;
    else if (case_num == 7) {
        // 200位回文
        string half;
        for (int i = 0; i < 100; i++) half += char('0' + rnd_ll(0, 9));
        if (half[0] == '0') half[0] = '1';
        string r(half.rbegin(), half.rend());
        fout << half + r << endl;
    }
    else if (case_num == 8) {
        // 200位非回文：改末位
        string s;
        for (int i = 0; i < 200; i++) s += char('0' + rnd_ll(0, 9));
        if (s[0] == '0') s[0] = '1';
        if (s.back() == s[0]) s.back() = (s[0] == '9' ? '1' : s[0] + 1);
        fout << s << endl;
    }
    else if (case_num == 9) fout << "1000000000000000000000000000001" << endl;
    else if (case_num >= 10 && case_num <= 25) {
        if (rnd_ll(0, 1)) {
            int len = (int)rnd_ll(1, 100);
            string half;
            for (int i = 0; i < len; i++) half += char('0' + rnd_ll(0, 9));
            if (half[0] == '0') half[0] = '1';
            string r(half.rbegin(), half.rend());
            fout << half + r << endl;
        } else {
            int len = (int)rnd_ll(2, 200);
            string s(1, char('1' + rnd_ll(0, 8)));
            for (int i = 1; i < len; i++) s += char('0' + rnd_ll(0, 9));
            if (s.back() != s[0]) fout << s << endl;
            else {
                s.back() = (s[0] == '9' ? '1' : s[0] + 1);
                fout << s << endl;
            }
        }
    }
}

#endif