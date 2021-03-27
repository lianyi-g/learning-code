//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,m,i,a,b,c,flag;
//	while(scanf("%d%d",&m,&n)!=EOF)
//	{
//		if(m>n)
//		{
//			i = m;
//			m = n;
//			n = i;
//		}
//		flag = 0;
//		for(i=m; i<=n; i++)
//		{
//			a = i%10;
//			b = i/10%10;
//			c = i/100;
//			if(i==(a*a*a + b*b*b + c*c*c))
//			{
//
//				flag = 1;
//				printf("%d",i);
//				if(i<n)
//					printf(" ");
//			}
//				
//		}
//		if(flag==0)
//			printf("no\n");
//		else
//			putchar('\n');
//	}
//	return 0;
//}