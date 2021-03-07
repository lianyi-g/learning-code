//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////1
////1 1
////1 2 1
////1 3 3 1
////1 4 6 4 1
////1 5 10 10 5 1
//int main()
//{
//	int n,i,j;
//	int arr[30][30];
//	while(scanf("%d",&n)!=EOF)
//	{
//		for(i=0; i<n; i++)
//		{
//			for(j=0; j<=i; j++)
//			{
//				arr[i][0] = 1;//第一列
//				if(i==j)//对角线
//				{
//					arr[i][j] = 1;
//				}
//				else if(i>1 && j>=1)
//				{
//					arr[i][j] = arr[i-1][j] + arr[i-1][j-1];//剩下的
//				}
//			}
//		}
//		for(i=0; i<n; i++)//输出
//		{
//			for(j=0; j<=i; j++)
//			{
//				printf("%d",arr[i][j]);
//				if(j<i)
//					printf(" ");
//			}
//			putchar('\n');
//		}
//		putchar('\n');
//	}
//	return 0;
//}