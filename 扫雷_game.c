#define _CRT_SECURE_NO_WARNINGS 1


#include "扫雷_game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for(; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for(i=0; i<=col; i++)
	{
		if(0==i)
			printf("  ");
		else
			printf("%d ",i);
	}
	printf("\n");

	for(i=1; i<=row; i++)
	{
		//打印行号
		printf("%d ",i);

		for(j=1; j<=col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int x = rand()%row + 1;//1-9
		int y = rand()%col + 1;
		if(board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
	
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x-1][y] + mine[x-1][y-1] +
		mine[x][y-1] + mine[x+1][y-1] +
		mine[x+1][y] + mine[x+1][y+1] +
		mine[x][y+1] + mine[x-1][y+1] -8*'0';
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row ,int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//设置游戏输赢标志
	while(win<row*col-EASY_COUNT)
	{
		printf("请输入：>");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			if(mine[x][y]=='1')
			{
				printf("很遗憾，你被炸死了！\n");
				break;
			}	
			else
			{
				//输出坐标周围雷的信息
				int count = get_mine_count(mine,x,y); 
				////递归展开更多扫雷信息-
				////1.不是雷，2.周围八个坐标也都没有雷，打印成空格
				//if(0==count)
				//{
				//	show[x][y] = '  ';
				//	FindMine(mine,show,ROW,COL);
				//}
				show[x][y] =count + '0';//数组是字符型数组

				DisplayBoard(show,ROW,COL);
				//字符‘0’！= 0，但是字符‘n’和字符‘0’相差为n，n为1-10
				win++;				
			}				
		}
		else
			printf("坐标非法，请重新输入！\n");
	}
	if(win==row*col-EASY_COUNT)
	{
		printf("恭喜你，此次排雷任务顺利完成！\n");
		DisplayBoard(mine,ROW,COL);
	}
		
}
