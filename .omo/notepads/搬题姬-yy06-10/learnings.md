# 搬题姬 yy06-10 合集打包（陈序洋班 8月11日作业编程题）— 2026-08-11

## 交付物
- 题面汇总：`/home/fslong/桌面/yy06-10.md`
- 合集 zip：`/home/fslong/桌面/yy06-10.zip`（11.3 MB，五题目录各 58 项，125 in + 125 out）
- 五题包：`work_yy0006_立方体游戏` ~ `work_yy0010_跑圈`（每包：problem_zh.md + problem.yaml + std.cpp + mkin.h + mkdata.cpp + testdata/25 组 + config.yaml）

## 每题要点（score/tag/算法）
| pid | 题 | NKOJ | score | tag | 算法 |
|-----|-----|------|-------|-----|------|
| yy0006 | 立方体游戏 | T1176 | 1100 | 计数/字符串/GESP 5级 | 2×min(cnt0,cnt1) |
| yy0007 | 士兵站队 | P3551 | 1300 | 中位数/贪心/GESP 5级 | y 中位数 + x 对 xᵢ−i 取中位数 |
| yy0008 | 倍数数组 | T1128 | 1400 | 贪心/数论/GESP 5级 | 逆向贪心 (B−(A+suf)%B)%B |
| yy0009 | 一维翻转棋 | P7808 | 1100 | 贪心/字符串/GESP 5级 | 相邻异色计数 |
| yy0010 | 跑圈 | T1005 | 1700 | 排序/树状数组/GESP 5级 | 商余排序+BIT |

分值推算：yy0006 ⭐⭐1000+大N100=1100；yy0007 ⭐⭐⭐1300（n≤1e4 无修正）；yy0008 ⭐⭐⭐1300+100=1400；yy0009 ⭐⭐1000+100=1100；yy0010 ⭐⭐⭐⭐1600+100=1700。均 50 倍数，与 problem_zh.md 知识点行一致。

## 关键坑与决策
1. **汇总文件必自源文件逐题誊写**：源文件 `/run/media/fslong/media/01-Projects/mdcie/试卷/电子学会/C++/五级/作业/2026年8月11日作业.md` 编程题区 `### yy0006~yy0010` 五节俱全；样例（平台原值 0011→4 等）逐字复制，禁改。源文件只读，禁改。
2. **题面去解题提示**：源文件【数据范围与提示】含算法提示（如"答案=2×min"），写入 problem_zh.md 时只留数据范围、去提示部分（禁附解题思路）；样例说明保留（属原题释，先例 zkh46-50 同）。
3. **目录名含标题简写**：`work_{pid}_{标题简写}`（如 work_yy0006_立方体游戏）——首打包时目录名缺标题，zip 失败后补 mv。先例 zkh 目录 work_zkh46_霓虹灯 同规。
4. **title 中文直用**：NKOJ 中文原题无英文标题，title 不套 `中文(英文)` 格式（先例 zkh 同）。
5. **config.yaml memory 改 256m**（模板 512m，先例 zkh 用 256m）。
6. **zsh glob 坑**：`rm -f *.exe` 无匹配文件时 zsh 报错中断 && 链——清理命令用 `rm -f std mkdata` 逐名或加 `2>/dev/null` 或 `setopt nullglob`。
7. **mkdata 运行后自删 ./std**（mkdata.cpp 尾部 rm -f std）——验数据后再查输出需重编 std。
8. **样例数不足 2 组时**：subtask 0 放 case1=样例 + case2=最小边界（如 N=1），测试点分布表说明列注明。
9. **Hack 有效性验证**：yy0008 case9 B=1e9 全 → 答案 5e13（int 溢出坑）；yy0010 case11 双速极端 → 6.25e13。均实测 std 输出合理。
10. **审计 PASS 方打包**：五题均逐项过 08-audit.md（文件完整性/题面五节+分布表/配置 pid 小写+score 50 倍数+tag≥2 知识点/分值推算记录）。

## 流程备忘（比赛搬运）
汇总文件(yy06-10.md) → 逐题：cp question → 写四件套 → g++ 验全样例 → mkin.h 25 组（只改 mkin.h）→ ./mkdata → diff 样例 → 审计 → rm std mkdata（禁单题 zip）→ 五题毕 → 根目录 zip -r yy06-10.zip work_* → unzip -l 验无嵌套 zip。
