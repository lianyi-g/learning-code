//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,m,i,j,tmp;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{
//		tmp = n;
//		printf("+");//打印第一行
//		while(tmp--)
//			printf("-");
//		printf("+\n");
//		for(j=0; j<m; j++)//打印矩形
//		{
//			printf("|");
//			for(i=0; i<n; i++)
//			{
//				printf(" ");
//			}
//			printf("|");
//			printf("\n");
//		}
//		tmp = n;
//		printf("+");//打印最后一行
//		while(tmp--)
//			printf("-");
//		printf("+\n\n");
//	}
//	return 0;
//}