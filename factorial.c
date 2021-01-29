#define _CRT_SECURE_NO_WARNINGS 1

////----------------------4
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;	
//	int num = 1;
//	int sum = 0;
//	for(i=1; i<=4; i++)
//	{
//		//优化
//		num = num * i;
//		sum = sum + num;//sum = sum + num * i--error
//
//
//		/*int num = 1;
//		for(j=1; j<=i; j++)
//			num = num * j;
//		sum = sum + num;*/
//	}
//	printf("%d\n",sum);
//	return 0;
//}

////----------------------3
//#include<stdio.h>
//
//int factr(int i)
//{
//	if(1==i||0==i)
//		return 1;
//	else
//		return i*factr(i-1);
//
//}
//int main()
//{
//	int j = 0;
//	int sum = 0;
//	for(j=1; j<=10; j++)
//		sum+=factr(j);
//	printf("1-%d的阶乘之和为：%d\n",j-1,sum);
//	return 0;
//}

////----------------------2
//#include<stdio.h>
//
//int factr(int i)
//{
//	if(1==i||0==i)
//		return 1;
//	else
//		return i*factr(i-1);
//
//}
//
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	printf("请输入要计算的阶乘数：\n");
//	scanf("%d",&num);
//	sum = factr(num);
//	printf("阶乘计算结果为：%d\n",sum);
//	return 0;
//}

////----------------------1
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int num = 0;
//	printf("请输入要计算的阶乘数：\n");
//	scanf("%d",&num);
//	if(0==num)
//		printf("阶乘计算结果为：%d\n",i+1);
//	else
//	{
//		for(i=1 ;i<=num ;i++)
//			sum*=i;
//		printf("阶乘计算结果为：%d\n",sum);
//	}
//	return 0;
//}