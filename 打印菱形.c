//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////-------------------------1
////void print_lx(int x)
////{
////	int mid = (x+1) /2;
////	int i,j,k;
////	//打印前mid行
////	for(i=1; i<=mid; i++)
////	{
////		//打印每行
////		k = mid-i;	
////		while(k)
////		{
////			printf(" ");//打印每行空格
////			k--;
////		}
////		for(j=0; j<(2*i-1); j++)
////		{
////			printf("*");//打印每行*
////		}
////		printf("\n");
////	}
////	//打印剩余行
////	for(i=mid+1; i<=x; i++)
////	{
////		//打印每行
////		k = i - mid;	
////		while(k)
////		{
////			printf(" ");//打印每行空格
////			k--;
////		}
////		for(j=0; j<(2*(x-i)+1); j++)
////		{
////			printf("*");//打印每行*
////		}
////		printf("\n");
////	}
////}
//
////--------------------------------2 优化
//void print_lx(int line)
//{
//	int i,j,k;
//	//打印上半部分
//	for(i=1; i<=line; i++)
//	{
//		//打印每行
//		k = line-i;	
//		while(k)
//		{
//			printf(" ");//打印每行空格
//			k--;
//		}
//		for(j=0; j<(2*i-1); j++)
//		{
//			printf("*");//打印每行*
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for(i=1; i<=line-1; i++)
//	{
//		//打印每行
//		k = i;	
//		while(k)
//		{
//			printf(" ");//打印每行空格
//			k--;
//		}
//		for(j=0; j<(2*(line-1-i)+1); j++)
//		{
//			printf("*");//打印每行*
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	print_lx(n);//n为菱形上半部分的行数，包括菱形最中间的那行
//	return 0;
//}