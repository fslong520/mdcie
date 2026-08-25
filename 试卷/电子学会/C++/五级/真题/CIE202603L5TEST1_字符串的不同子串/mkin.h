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
 * 字符串的不同子串 - 测试数据生成
 * 输入：一个小写英文字母串 s
 * 输出：s 的不同非空子串数量
 * 范围：1 ≤ |s| ≤ 100
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

string rnd_str(int len, int alphabet) {
    string s;
    for (int i = 0; i < len; i++) s += char('a' + rnd_ll(0, alphabet - 1));
    return s;
}

void test(int case_num, ofstream& fout)
{
    srand(20260824 + case_num * 1000003);

    if (case_num == 1) {
        fout << "aababc" << endl;
    }
    else if (case_num == 2) {
        fout << "abracadabra" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int len = 8 + (case_num - 3) * 6;
        fout << rnd_str(len, 5) << endl;
    }
    else if (case_num == 6) {
        // 全同字符：不同子串数 = 长度
        fout << "aaaaaa" << endl;
    }
    else if (case_num == 7) {
        // 全不同：不同子串数 = n(n+1)/2
        fout << "abcdefghij" << endl;
    }
    else if (case_num == 8) {
        // 单字符
        fout << "a" << endl;
    }
    else if (case_num == 9) {
        // 长度 100 全同 → 100
        fout << string(100, 'z') << endl;
    }
    else if (case_num == 10) {
        // 长度 100 全 26 字母循环 → 5050
        string s;
        for (int i = 0; i < 100; i++) s += char('a' + i % 26);
        fout << s << endl;
    }
    else if (case_num == 11) {
        // 长度 100 随机（小字母表，多重复）
        fout << rnd_str(100, 4) << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int len = 40 + (case_num - 12) * 5;
        fout << rnd_str(len, 8) << endl;
    }
    else {
        // 长度 100 随机，字母表变化
        fout << rnd_str(100, (case_num == 21) ? 2 : ((case_num == 22) ? 26 : 13)) << endl;
    }
}

#endif