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
 * 单词频率 - 测试数据生成
 * 输入：n，以及 n 个小写单词
 * 输出：按次数降序、字典序升序输出"单词 次数"
 * 范围：1 ≤ n ≤ 1e5，单词长度 ≤ 20
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

// 生成一个长度 1..20 的小写单词
string rnd_word(int max_len) {
    int len = (int)rnd_ll(1, max_len);
    string w;
    for (int i = 0; i < len; i++) w += char('a' + rnd_ll(0, 25));
    return w;
}

void test(int case_num, ofstream& fout)
{
    srand(20260819 + case_num * 1000003);

    if (case_num == 1) {
        fout << "6" << endl;
        fout << "apple banana apple cat banana apple" << endl;
    }
    else if (case_num == 2) {
        fout << "4" << endl;
        fout << "a a b a" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 10 + (case_num - 3) * 10;
        fout << n << endl;
        vector<string> pool = {"cat", "dog", "pig", "bee", "ant", "cow", "fox", "hen"};
        for (int i = 0; i < n; i++) {
            if (i) fout << " ";
            fout << pool[rnd_ll(0, pool.size() - 1)];
        }
        fout << endl;
    }
    else if (case_num == 6) {
        // 全部相同单词
        int n = 20;
        fout << n << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << "same"; }
        fout << endl;
    }
    else if (case_num == 7) {
        // 每种单词恰好一次（无并列）
        int n = 10;
        fout << n << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << "w" << i; }
        fout << endl;
    }
    else if (case_num == 8) {
        // 所有单词并列相同次数（两词交替）
        int n = 20;
        fout << n << endl;
        for (int i = 0; i < n; i++) { if (i) fout << " "; fout << (i % 2 ? "b" : "a"); }
        fout << endl;
    }
    else if (case_num == 9) {
        // n=1
        fout << "1" << endl;
        fout << "only" << endl;
    }
    else if (case_num == 10) {
        // 单词长度上限 20
        fout << "5" << endl;
        fout << "abcdefghijklmnopqrst zzzzzzzzzzzzzzzzzzzz a a a" << endl;
    }
    else if (case_num == 11) {
        // 字典序边界：a、aa、aaa 与 z 系列
        fout << "8" << endl;
        fout << "a aa aaa z zzz a aa zzz" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 500 + (case_num - 12) * 500;
        fout << n << endl;
        for (int i = 0; i < n; i++) {
            if (i) fout << " ";
            fout << "w" << rnd_ll(0, 99);
        }
        fout << endl;
    }
    else {
        // 极限规模：n=1e5，词池 1000 个
        fout << "100000" << endl;
        for (int i = 0; i < 100000; i++) {
            if (i) fout << " ";
            fout << "w" << rnd_ll(0, 999);
        }
        fout << endl;
    }
}

#endif