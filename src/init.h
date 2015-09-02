/*
* 声明程序初始化模块的代码
*/

#ifndef _INIT_H_
#define _INIT_H_

#include "types.h"

/*
* 函数 void init_money(Game *game, int money);
* 参数：game 指向游戏数据结构体的指针
* 参数：money 玩家初始资金，范围1000 - 50000，默认10000
* 作用：初始化每位玩家的资金
* 作者：
*/
void init_money(Game *game, int money);

/*
* 函数 void init_players(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：初始化游戏中的玩家数据
* 作者：
*/
void init_players(Game *game);

/*
* 函数 void init_map(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：初始化游戏中的地图数据
* 作者：
*/
void init_map(Game *game);

/*
* 函数 void init_others(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：初始化游戏中的其他数据，程序所用的随机种子在此进行设置
* 作者：
*/
void init_others(Game *game);

#endif