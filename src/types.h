/*
* 声明程序中的类型 
*/

#ifndef _TYPES_H_
#define _TYPES_H_

#define MAX_PLAYER_NUM 4		// 玩家人数的最大值
#define MAX_PLACE_NUM 68		// 地块的数量

/* 定义玩家数据的结构体 */
typedef struct Player{
	int id;		// 玩家编号，从1开始
	char *name;	// 玩家姓名
	int money;	// 玩家所拥有的资金
	int point;	//玩家所拥有的点数
	unsigned int pos;	// 玩家当前位置，0为起点，向顺时针方向增长坐标
	char acronym;	// 玩家显示在屏幕上的符号
	char status;	// 玩家的状态，例如在医院里为'H'，在监狱里为'P'
	int place_amount;	// 固定资产中的土地的数量
	int house_amount;	// 固定资产中的房屋的数量
	int block_amount;	// 玩家拥有的路障的数量
	int bomb_amount;	// 玩家拥有的炸弹的数量
	int robot_amount;	// 玩家拥有的机器娃娃的数量
	unsigned short color;	// 玩家颜色
}Player;	// 玩家

/* 定义地块数据的结构体 */
typedef struct Place{
	char type;	// 地形，例如'0'表示表示空地，'1'表示茅屋，'2'表示洋房，'3'表示摩天楼，为PLACE_TYPE枚举类型
	Player *owner;	// 土地主人，公共资产owner为null
	int price;	//土地初始定价，对于矿地，代表的是点数
	char tools_type;	// 上面放置的道具的类型，为TOOLS_TYPE类型
	unsigned int x;
	unsigned int y;
}Place;		// 地块

/* 定义游戏全局变量的结构体 */
typedef struct Game{
	int init_money;	// 每位玩家初始资金
	int playerNum;	// 玩家个数
	Player players[MAX_PLAYER_NUM];	// 玩家数据结构体数组
	int currentPlayerIndex;	// 当前玩家的编号
	unsigned int placeNum;	// 地图长度，即有效地块个数
	Place map[MAX_PLACE_NUM];	// 地块数据结构体数组
}Game;	// 游戏数据

typedef enum{
	START = 'S',	// 起点
	LAND = '0',		// 空地
	HOSPITAL = 'H',	// 医院
	TOOLS_HOUSE = 'T',	// 道具屋
	GIFT_HOUSE = 'G',	// 礼品屋
	PRISON = 'P',	// 监狱
	MINE = '$',		// 矿地
	MAGIC_HOUSE = 'M',	// 魔法屋
	OWN_LAND = 1,
	OTHERS_LAND = 2
}PLACE_TYPE;	// 地块类型，枚举类型

typedef enum{
	BLOCK = '#',	// 路障
	BOMB = '@'		// 炸弹
}TOOLS_TYPE;

#endif