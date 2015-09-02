/*
* 声明程序中与控制台输出有关的函数
*/

#ifndef _VIEW_H_
#define _VIEW_H_

#include "types.h"

/*
* 函数 void output_map(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：输出游戏的地图
* 作者：
*/
void output_map(Game *game);

/*
* 函数 void show_current_player(Game *game);
* 参数：game 指向游戏数据结构体的指针
* 作用：显示当前玩家
* 作者：
*/
void show_current_player(Game *game);

#endif