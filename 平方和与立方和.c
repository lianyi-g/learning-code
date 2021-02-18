//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include  <stdio.h>
//int my_math1(int x,int y)
//{
//	int i;
//	int sum = 0;
//	for(i=x; i<=y; i++)
//	{
//		if(i%2==0)		//偶数平方和
//			sum += i*i;
//	}
//	return sum;
//}
//int my_math2(int x,int y)
//{
//	int i;
//	int sum = 0;
//	for(i=x; i<=y; i++)
//	{
//		if(i%2)			//奇数立方和
//			sum += i*i*i;
//	}
//	return sum;
//}
//
//int  main()
//{
//	int m,n,x,y,temp;
//	while(scanf("%d%d",&m,&n)!=EOF)
//	{
//		getchar();
//		if(m>n)//保证m小于n
//		{
//			temp = m;
//			m = n;
//			n = temp;
//		}
//		x = my_math1(m,n);
//		y = my_math2(m,n);
//		printf("%d %d\n",x,y);
//	}
//	return 0;
//}