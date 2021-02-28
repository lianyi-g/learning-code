//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10][10] = {0};
//	int i,j;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			if(j==0)
//				arr[i][j] = 1;//去掉空格时的第一列
//			else if(i==j)
//				arr[i][j] = 1;//去掉空格时的对角线
//			else
//				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
//		}
//	}
//	//打印结果
//	for(i=0; i<10; i++)
//	{
//		//加上空格
//		for(j=0; j<10-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印数字
//		for(j=0; j<=i; j++)
//		{
//			printf("%-4d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}