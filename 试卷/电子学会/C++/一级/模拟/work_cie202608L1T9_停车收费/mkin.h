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
 * 停车收费 - 测试数据生成
 * 输入：h m（0≤h≤24, 0≤m≤59，不同时为0）
 * 取整 t = h + (m>0)；t≤2: fee=t*5；t>2: fee=10+(t-2)*8
 */

void test(int case_num, ofstream& fout)
{
    // ============================================================
    // Subtask 0: 样例数据 — case 1-2
    // ============================================================
    if (case_num == 1) {
        fout << 1 << " " << 30 << endl;
    }
    else if (case_num == 2) {
        fout << 4 << " " << 20 << endl;
    }
    // ============================================================
    // Subtask 1: 小规模 + 特殊性质 — case 3-8
    // ============================================================
    else if (case_num == 3) {
        fout << 0 << " " << 30 << endl; // 取整1小时
    }
    else if (case_num == 4) {
        fout << 1 << " " << 0 << endl;  // 恰好1小时
    }
    else if (case_num == 5) {
        fout << 2 << " " << 0 << endl;  // 恰好2小时
    }
    else if (case_num == 6) {
        fout << 0 << " " << 1 << endl;  // 最小输入
    }
    else if (case_num == 7) {
        fout << 1 << " " << 1 << endl;  // 取整2小时
    }
    else if (case_num == 8) {
        fout << 2 << " " << 59 << endl; // 取整3小时
    }
    // ============================================================
    // Subtask 2: Hack 数据 — case 9-11
    // ============================================================
    else if (case_num == 9) {
        fout << 2 << " " << 0 << endl;  // Hack：恰好2小时不收超时费
    }
    else if (case_num == 10) {
        fout << 2 << " " << 1 << endl;  // Hack：2小时1分钟即超时
    }
    else if (case_num == 11) {
        fout << 24 << " " << 59 << endl; // Hack：最大 25 小时
    }
    // ============================================================
    // Subtask 3: 中大规模 — case 12-20
    // ============================================================
    else if (case_num >= 12 && case_num <= 20) {
        int h = rand() % 22 + 3; // 3~24
        int m = rand() % 60;
        fout << h << " " << m << endl;
    }
    // ============================================================
    // Subtask 4: 随机回归 — case 21-25
    // ============================================================
    else {
        int h = rand() % 25; // 0~24
        int m = rand() % 60;
        if (h == 0 && m == 0) m = 1; // 防全零
        fout << h << " " << m << endl;
    }
}

#endif
