#include "command.h"
#include "helper.h"
#include "init.h"
#include "types.h"
#include "view.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	Game game;	// 游戏数据的结构体变量

	// 初始化每位玩家的资金
	init_money(&game);
	// 初始化玩家
	init_players(&game);
	// 初始化地图
	init_map(&game);
	// 初始化游戏中的其他数据
	init_others(&game);

	// 输出地图
	output_map(&game);

	// 以下为游戏主要流程，可根据需要修改代码
	while (1)
	{
		// 此处写游戏主要流程

		// 此处写判断游戏是否结束的代码，所用的函数自己定义
		// 类似这样：
		// if (is_game_over(&game))
		// {
		//		break;
		// }
	}

	// 游戏所用资源的释放，如果使用了malloc函数分配内存，在这里调用free函数进行释放

	return 0;
}
