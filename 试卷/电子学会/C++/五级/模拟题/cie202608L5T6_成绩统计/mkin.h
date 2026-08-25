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
 * 成绩统计 - 测试数据生成
 * 输入：n，以及 n 行"学号 语文 数学 英语"
 * 输出：按 总分降序、语文降序、学号升序 输出"学号 总分"
 * 范围：1 ≤ n ≤ 1e5，成绩 0 ≤ x ≤ 100
 */

long long rnd_ll(long long lo, long long hi) {
    return lo + (long long)(((long long)rand() << 15 | rand()) % (hi - lo + 1));
}

void test(int case_num, ofstream& fout)
{
    srand(20260819 + case_num * 1000003);

    if (case_num == 1) {
        fout << "3" << endl;
        fout << "1 90 80 70" << endl;
        fout << "2 100 70 70" << endl;
        fout << "3 80 90 80" << endl;
    }
    else if (case_num == 2) {
        fout << "2" << endl;
        fout << "5 60 60 60" << endl;
        fout << "6 70 50 60" << endl;
    }
    else if (case_num >= 3 && case_num <= 5) {
        int n = 6 + (case_num - 3) * 4;
        fout << n << endl;
        for (int i = 1; i <= n; i++) {
            fout << i << " " << rnd_ll(0, 100) << " " << rnd_ll(0, 100) << " " << rnd_ll(0, 100) << endl;
        }
    }
    else if (case_num == 6) {
        // 总分全部并列，比语文
        fout << "5" << endl;
        fout << "1 60 70 70" << endl;
        fout << "2 100 40 60" << endl;
        fout << "3 80 60 60" << endl;
        fout << "4 50 80 70" << endl;
        fout << "5 90 50 60" << endl;
    }
    else if (case_num == 7) {
        // 总分与语文全部并列，比学号
        fout << "4" << endl;
        fout << "3 80 80 80" << endl;
        fout << "1 80 80 80" << endl;
        fout << "4 80 80 80" << endl;
        fout << "2 80 80 80" << endl;
    }
    else if (case_num == 8) {
        // 满分与零分边界
        fout << "4" << endl;
        fout << "1 100 100 100" << endl;
        fout << "2 0 0 0" << endl;
        fout << "3 100 0 0" << endl;
        fout << "4 0 100 0" << endl;
    }
    else if (case_num == 9) {
        // n=1
        fout << "1" << endl;
        fout << "7 50 60 70" << endl;
    }
    else if (case_num == 10) {
        // 少量学生大型分数碰撞
        fout << "6" << endl;
        fout << "6 50 50 50" << endl;
        fout << "5 50 50 50" << endl;
        fout << "4 50 50 51" << endl;
        fout << "3 51 50 50" << endl;
        fout << "2 50 51 50" << endl;
        fout << "1 50 50 50" << endl;
    }
    else if (case_num == 11) {
        // 学号乱序输入（学号非输入顺序）
        fout << "5" << endl;
        fout << "8 90 10 10" << endl;
        fout << "2 10 90 10" << endl;
        fout << "5 10 10 90" << endl;
        fout << "1 40 40 30" << endl;
        fout << "9 33 33 33" << endl;
    }
    else if (case_num >= 12 && case_num <= 20) {
        int n = 1000 + (case_num - 12) * 1000;
        fout << n << endl;
        // 学号打乱
        vector<int> ids(n);
        for (int i = 0; i < n; i++) ids[i] = i + 1;
        random_shuffle(ids.begin(), ids.end());
        for (int i = 0; i < n; i++) {
            fout << ids[i] << " " << rnd_ll(0, 100) << " " << rnd_ll(0, 100) << " " << rnd_ll(0, 100) << endl;
        }
    }
    else {
        // 极限规模：n=1e5，学号打乱，分数随机
        int n = 100000;
        fout << n << endl;
        vector<int> ids(n);
        for (int i = 0; i < n; i++) ids[i] = i + 1;
        random_shuffle(ids.begin(), ids.end());
        for (int i = 0; i < n; i++) {
            fout << ids[i] << " " << rnd_ll(0, 100) << " " << rnd_ll(0, 100) << " " << rnd_ll(0, 100) << endl;
        }
    }
}

#endif