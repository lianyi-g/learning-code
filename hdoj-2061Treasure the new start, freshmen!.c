//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,i,flag,k;
//	double c,s,sum_c,sum_gpa;
//	scanf("%d",&n);
//	while(n-- && scanf("%d",&i))
//	{
//		k = n;
//		sum_c = sum_gpa = 0.0;
//		flag = 1;
//		while(i-- && scanf("%*s%lf%lf",&c,&s))
//		{
//			if(s<60 && s>0)
//			{
//				flag = 0;
//			}
//			sum_c += c;
//			sum_gpa += c*s;
//		}
//		if(flag)
//			printf("%.2lf\n",sum_gpa / sum_c);
//		else
//			printf("Sorry!\n");
//		if(k)
//			putchar('\n');
//	}
//	return 0;
//}