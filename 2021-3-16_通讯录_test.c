#define _CRT_SECURE_NO_WARNINGS 1


#include "2021-3-16_通讯录_contact.h"
//#include <stdio.h>

void menu()
{
	printf("***********************************\n");
	printf("******1.add          2.delete******\n");
	printf("******3.search       4.modify******\n");
	printf("******5.show         6.sort********\n");
	printf("******0.exit***********************\n");
}
//测试
int main()
{
	int input;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择->");
		scanf("%d",&input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while(input);
	
	return 0;
}