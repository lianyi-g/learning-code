#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,temp,flag;
	int arr[100];
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		//接收输入的数据
		for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
		//对输入的数据排序--冒泡排序		
		for(i=0; i<n-1; i++)//确定趟数
		{
			flag = 0;//是否已经有序标志
			for(j=0; j<n-i-1; j++)//确定两两比较次数
			{
				if(abs(arr[j])<abs(arr[j+1]))
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					flag = 1;//数组无序或部分有序
				}
			}
			if(flag==0)
				break;
		}
		//输入数据
		for(i=0; i<n; i++)
		{
			printf("%d",arr[i]);
			if(i<n-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}