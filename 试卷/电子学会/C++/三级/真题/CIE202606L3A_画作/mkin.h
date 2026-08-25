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
 * 画作 - 测试数据生成
 * 输入：n，n 行 n 列字符
 * 输出：顺时针旋转 90 度后的矩阵
 * 范围：1 ≤ n ≤ 1000
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "4" << endl;
        fout << "ooxx" << endl << "xoox" << endl << "xxxx" << endl << "xxxx" << endl;
    }
    else if (case_num == 2) {
        fout << "2" << endl;
        fout << "12" << endl << "34" << endl;
    }
    else if (case_num == 3) { fout << "1\nx\n"; }
    else if (case_num == 4) { fout << "3\nabc\ndef\nghi\n"; }
    else if (case_num == 5) {
        int n = 5;
        fout << n << endl;
        for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) fout << char('a' + rnd_ll(0, 25)); fout << endl; }
    }
    else if (case_num == 6) {
        // 全同字符
        fout << "6" << endl;
        for (int i = 0; i < 6; i++) fout << "oooooo" << endl;
    }
    else if (case_num == 7) {
        // 数字字符
        fout << "3" << endl;
        fout << "111\n222\n333" << endl;
    }
    else if (case_num == 8) { fout << "2\nxo\nox\n"; }
    else if (case_num == 9) {
        // n=1000 随机
        fout << "1000" << endl;
        for (int i = 0; i < 1000; i++) { for (int j = 0; j < 1000; j++) fout << char('a' + rnd_ll(0, 1)); fout << endl; }
    }
    else if (case_num == 10) { fout << "1\nA\n"; }
    else if (case_num == 11) {
        fout << "4" << endl;
        fout << "abcd" << endl << "efgh" << endl << "ijkl" << endl << "mnop" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 30 + (case_num - 12) * 30;
        fout << n << endl;
        for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) fout << char('a' + rnd_ll(0, 25)); fout << endl; }
    }
    else {
        int n = 1000;
        fout << n << endl;
        for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) fout << char('a' + rnd_ll(0, 25)); fout << endl; }
    }
}

#endif