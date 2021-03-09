//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,i,num1,num2,sum1,sum2;
//	scanf("%d",&n);
//	while(n-- && scanf("%d%d",&num1,&num2))
//	{
//		sum1 = sum2 = 0;
//		for(i=1; i<=num1/2; i++)
//		{
//			if(num1%i==0)
//				sum1 += i;
//		}
//		for(i=1; i<=num2/2; i++)
//		{
//			if(num2%i==0)
//				sum2 += i;
//		}
//		if(sum1==num2 && sum2==num1)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}