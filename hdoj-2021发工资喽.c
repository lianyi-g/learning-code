//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{	
//	int n,sum,i;
//	int salary[100];
//	while(scanf("%d",&n)!=EOF)
//	{
//		if(n==0)
//			break;
//		sum = 0;
//		for(i=0; i<n; i++)//输入数据
//		{
//			scanf("%d",&salary[i]);
//			while(salary[i]>0)//处理数据
//			{
//				if(salary[i]/100>0)
//				{
//					sum += salary[i]/100;
//					salary[i] = salary[i]%100;
//				}
//				else if(salary[i]/50>0)
//				{
//					sum += salary[i]/50;
//					salary[i] = salary[i]%50;
//				}
//				else if(salary[i]/10>0)
//				{
//					sum += salary[i]/10;
//					salary[i] = salary[i]%10;
//				}
//				else if(salary[i]/5>0)
//				{
//					sum += salary[i]/5;
//					salary[i] = salary[i]%5;
//				}
//				else if(salary[i]/2>0)
//				{
//					sum += salary[i]/2;
//					salary[i] = salary[i]%2;
//				}
//				else
//				{
//					sum += salary[i];
//					salary[i] = 0;
//				}
//			}
//		}
//		printf("%d\n",sum);
//	}	
//	return 0;
//}