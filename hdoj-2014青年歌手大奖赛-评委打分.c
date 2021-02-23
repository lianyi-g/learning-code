//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,i;
//	double min,max,sum,avg;
//	double arr[100];
//	while(scanf("%d",&n)!=EOF)
//	{
//		if(n>2 && n<=100)
//		{
//			scanf("%lf",&arr[0]);//第一次的成绩
//			sum = min = max = arr[0];
//			for(i=1; i<n; i++)
//			{
//				scanf("%lf",&arr[i]);
//				if(arr[i]>max)
//					max = arr[i];
//				if(arr[i]<min)
//					min = arr[i];
//				sum += arr[i];
//			}
//			avg = (sum - min - max)/(n-2);
//			printf("%.2lf\n",avg);
//		}		
//	}
//	return 0;
//}