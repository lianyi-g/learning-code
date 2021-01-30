//#define _CRT_SECURE_NO_WARNINGS 1
//
////-----------------------5打印素数--试除法
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//for(i=100; i<=200; i++)
//	for(i=101; i<200; i+=2)//--偶数不可能是素数，故优化
//	{
//		//--结论：i=a*b，那么a和b中至少有一个数是<= 开平方i的
//		//for(j=2; j<i; j++)
//		//for(j=2; j<=sqrt(i*1.0); j++)//①使用开平方函数，不过要注意sqrt（参数）参数应是double或float型
//		for(j=2; j<i/2; j++)//②使用值的一半，优化算法，而i开平方必然是<=i/2的
//		{
//			if(i%j==0)
//				break;
//		}
//		//if(j==i)
//		//if(j>sqrt(i*1.0))
//		if(j==i/2)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n素数共有：%d个！\n",count);
//	return 0;
//}

////-----------------------4打印闰年
//#include<stdio.h>
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	//printf("请输入年份：\n");
//	//scanf("%d",&y);
//	for(y=1000; y<=2000; y++)
//	{
//		//能被4整除，但不能被100整除；或者能被400整除为闰年
//		if((y%100!=0 && y%4==0) || y%400==0)
//		{
//			printf("%d是闰年！   ",y);
//			count++;
//		}
//	}
//	printf("总闰年数量：%d\n",count);
//	return 0;
//}

//-----------------------3
//#include<stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入要求最大公约数的两个数：\n");
//	scanf("%d%d",&m,&n);
//	while(r = m%n)
//	{
//		//辗转相除法
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}
//-----------------------2
//#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%3==0)
//			printf("%d ",i);
//	}
//	return 0;
//}

//-----------------------1
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入要比较的3个整数：\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		int temp = 0;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if(a>c)
//	{
//		int temp = 0;
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if(b>c)
//	{
//		int temp = 0;
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	printf("比较结果从小到大为:%d %d %d ",a,b,c);		
//	return 0;
//}