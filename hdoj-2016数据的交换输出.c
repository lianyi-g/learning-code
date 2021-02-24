//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,min,tmp,i,k,j;
//	int arr[100];
//	while(scanf("%d",&n)!=EOF)
//	{
//		if(n==0)
//			break;
//		scanf("%d",&arr[0]);
//		min = arr[0];
//		k = 0;//记录最小值的下标
//		for(i=1; i<n; i++)
//		{
//			scanf("%d",&arr[i]);
//			if(min>arr[i])
//			{
//				min = arr[i];
//				k = i;
//			}
//		}
//		//交换
//		tmp = arr[0];
//		arr[0] = arr[k];
//		arr[k] = tmp;
//		for(j=0; j<n; j++)
//		{
//			printf("%d",arr[j]);
//			if(j<n-1)
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}