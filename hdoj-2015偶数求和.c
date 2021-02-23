//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,m,i,j,sum,count;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{
//		for(i=1; i<=n;)
//		{
//			sum = 0;
//			count =0;
//			for(j=1; j<=m&&i<=n; j++)
//			{
//				sum += i*2;	
//				count++;
//				i++;
//			}	
//			printf("%d",sum / count);
//			if(i<=n)
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}