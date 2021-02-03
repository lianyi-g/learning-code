#define _CRT_SECURE_NO_WARNINGS 1


#include "game2.h"
//函数实现
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//注意i j的位置
	for(; i<row ;i++)
	{
		int j = 0;
		for(; j<col; j++)
			board[i][j] = ' ';
	}
}
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
	//int i = 0;
	//for(; i<row ; i++)
	//{
	//	//打印一行的数据
	//	printf(" %c | %c | %c\n",board[i][0],board[i][1],board[i][2]);
	//	//打印分割行
	//	if(i<row-1)
	//		printf("---|---|---\n");
	//	
	//}
	//优化
	int i = 0;
	for(; i<row; i++)
	{
		int j = 0;
		for(; j<col; j++)
		{
			//打印一行数据行的数据
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");	
		//打印一行分割行
		if(i<row-1)
		{
			for(j=0; j<col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
			
	}

}
void PlayerMOve(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：\n");
	while(1)
	{
		printf("请输入坐标：>\n");
		scanf("%d%d",&x,&y);
		//判断条件应是从玩家的习惯思维出发
		//if(x<row-1 && y<col-1)//程序员思维
		if(x>=1 && x<=row && y>=1 && y<=col)	//玩家思维
		{
			if(board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}			
			else	
				printf("坐标已被占用，请重新输入坐标：>\n");	
		}
		else 
			printf("坐标非法，请重新输入坐标！\n");
	}	
}

void CompterMOve(char board[ROW][COL], int row, int col)
{
	//随机生成坐标，调用rand（）函数，而调用rand（）要先调用一次srand（）生成随机参考点
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while(1)
	{
		x = rand() % row;
		y = rand() % col;
		if(board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}			
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//一行元素相等
	for(; i<row; i++)
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ')
			return board[i][0];
	}
	//一列元素相等
	for(; j<col; j++)
	{
		if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[0][j]!=' ')
			return board[0][j];
	}
	//两对角线相等
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' ')
		return board[0][0];
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
		return board[0][0];
	//平局
	if(1==IsFull(board,ROW,COL))
		return 'TW';
	return 'C';
}

//返回1，表示棋盘满了
//返回0，表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for(; i<row; i++)
	{
		int j = 0;
		for(; j<col; j++)
		{
			if(board[i][j] ==' ')
				return 0;
		}
	}
	return 1;
}