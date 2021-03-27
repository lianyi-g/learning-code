//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,m,x,y;
//	while(scanf("%d%d",&m,&n)!=EOF)
//	{
//		int i;
//		if(m>n)
//		{
//			i = m;
//			m = n;
//			n = i;
//		}
//		x = y = 0;
//		for(i=m; i<=n; i++)
//		{
//			/*if(i%2==0)
//			{
//				x += i*i;
//			}
//			else
//				y += i*i*i;*/
//			(i & 1)?(y += i*i*i):(x += i*i);
//		}
//		printf("%d %d\n",x,y);
//	}
//	return 0;
//}