//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//void conversion(int n,int R)
//{
//	if(n)//µÝ¹éÊµÏÖÄæÐòÊä³ö
//	{
//		conversion(n/R,R);
//		printf("%c",n % R > 9 ? n % R - 10 + 'A':n % R + '0');
//	}
//}
//int main()
//{
//	int n,R;
//	while(scanf("%d%d",&n,&R)!=EOF)
//	{
//		if(n>0)
//			conversion(n,R);
//		else if(n<0)
//		{
//			putchar('-');
//			conversion(-n,R);
//		}			
//		else
//			putchar('0');		
//		printf("\n");
//	}
//	return 0;
//}