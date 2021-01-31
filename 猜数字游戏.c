#define _CRT_SECURE_NO_WARNINGS 1
////---------------1 生成随机数，模拟猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	//RAND_MAX--32767，rand（）生成0-32767之间的整数
//	//使用时间戳来充当srand需要的随机数参数--作为生成数的生成起始点
//	//time(time* timer)函数返回值类型为time_t--就是一个long int，获取系统时间，头文件为time.h
//	//生成1-100之间的随机整数
//	int ret = 0;
//	ret = rand()%100+1;
//	while(1)
//	{
//		int k = 0;
//		printf("请猜数字：\n");
//		scanf("%d",&k);
//		if(k>ret)
//			printf("猜大了！\n");
//		else if(k<ret)
//			printf("猜小了！\n");
//		else
//		{
//			printf("恭喜您猜对了！\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("*****1.play****0.exit*****\n");
//	printf("**************************\n");
//}
//int main()
//{
//	
//	//rand();
//	int num = 0;
//	srand((unsigned int)time(NULL));//只调用一次，设置随机数生成起始点
//	do
//	{		
//		menu();
//		printf("输入数字开始游戏\n");
//		scanf("%d",&num);
//		switch(num)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入：\n");
//			break;
//		}
//
//	}while(num);
//	return 0;
//}