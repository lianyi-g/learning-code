#define _CRT_SECURE_NO_WARNINGS 1

#include "扫雷_game.h"

void game()
{
	//存储布雷信息
	char mine[ROWS][COLS] = {0};
	//存储排雷信息
	char show[ROWS][COLS] = {0};
	//初始化数组
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	//随机布雷
	SetMine(mine,ROW,COL);
	DisplayBoard(mine,ROW,COL);
	//扫雷
	FindMine(mine,show,ROW,COL);
}

void menu()
{
	printf("***************************\n");
	printf("**********1 开始游戏*******\n");
	printf("**********0 退出游戏*******\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入非法，请重新输入！\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}