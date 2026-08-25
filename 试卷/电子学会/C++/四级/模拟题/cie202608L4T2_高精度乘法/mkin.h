#pragma once

#ifndef MKIN_H
#define MKIN_H

#include <bits/stdc++.h>
using namespace std;

// ═══════════════════════════════════════════════════════════════════
// 总测试点数量 & Subtask 分组配置
// ═══════════════════════════════════════════════════════════════════
const int TEST_CASES = 25;

struct SubtaskDef {
    int id, start, end;
};
const SubtaskDef SUBTASKS[] = {
    {0, 1, 2},    // 样例
    {1, 3, 8},    // 小规模 + 特殊性质
    {2, 9, 11},   // Hack 数据
    {3, 12, 20},  // 中大规模
    {4, 21, 25},  // 随机回归
};
const int SUBTASK_COUNT = sizeof(SUBTASKS) / sizeof(SUBTASKS[0]);

/**
 * 高精度乘法 - 测试数据生成
 * 输入：两个正整数（字符串，无前导 0）
 * 输出：两数之积
 * 范围：长度 ≤ 500
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

// 生成 len 位无前导 0 的数字串
string rnd_num(int len) {
    string s;
    s += char('1' + rnd_ll(0, 9));
    if (len > 1) {
        for (int i = 1; i < len; i++) s += char('0' + rnd_ll(0, 9));
    }
    return s;
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "12" << endl << "12" << endl;
    }
    else if (case_num == 2) {
        fout << "999999999999999999999999999999" << endl << "2" << endl;
    }
    else if (case_num == 3) fout << "1" << endl << "1" << endl;
    else if (case_num == 4) fout << "10" << endl << "10" << endl;
    else if (case_num == 5) fout << "99" << endl << "99" << endl;
    else if (case_num == 6) fout << "123456789" << endl << "987654321" << endl;
    else if (case_num == 7) fout << rnd_num(20) << endl << "1" << endl;
    else if (case_num == 8) fout << rnd_num(15) << endl << rnd_num(15) << endl;
    else if (case_num == 9) fout << string(100, '9') << endl << string(100, '9') << endl;
    else if (case_num == 10) fout << "99999999999999999999" << endl << "99999999999999999999" << endl;
    else if (case_num == 11) fout << string(500, '9') << endl << "2" << endl;
    else if (case_num >= 12 && case_num <= 20) {
        int la = 20 + (case_num - 12) * 20;
        int lb = 20 + (case_num - 12) * 25;
        fout << rnd_num(la) << endl << rnd_num(lb) << endl;
    }
    else {
        // 长度极限：500 位
        fout << rnd_num(500) << endl << rnd_num(500) << endl;
    }
}

#endif