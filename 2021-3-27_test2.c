//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int x,y,i,j,flag;
//	while(scanf("%d%d",&x,&y) && x+y)
//	{
//		if(x>y)
//		{
//			i = x;
//			x = y;
//			y = i;
//		}
//		flag = 1;
//		for(i=x; i<=y; i++)
//		{
//			for(j=2; j<=sqrt((i*i+i+41)*1.0); j++)
//			{
//				if((i*i+i+41)%j==0)
//				{
//					flag = 0;
//					break;
//				}					
//			}
//		}
//		flag? printf("OK\n"):printf("Sorry\n");
//	}
//	return 0;
//}