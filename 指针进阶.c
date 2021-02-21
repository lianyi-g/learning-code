#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
////----------------------------------2
//
//void print1(int arr[3][5], int x, int y)
//{
//	int i,j;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ",arr[i][j]);
//			printf("%d ",*(arr[i]+j));
//			//arr[i]是第i行的首元素地址即元素arr[i][0]，第i行可看成一个一维数组
//		}
//		printf("\n");
//	}
//}
//void print2(int arr[], int n)
//{
//	int i = 0;
//	for(; i<n; i++)
//	{
//		printf("%d ",*(arr+i));//这里的arr可以视为指针
//	}
//}
//
//void print3(int (*p)[5], int x ,int y)
//{
//	//数组指针指向每一行的一维数组,5代表数组指针指向的一维数组，有5个元素，即一行有5个元素
//	int i,j;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ",*(*(p+i)+j));
//				//*(p+i)  == p[i]
//			//printf("%d ",(*(p+i))[j]);
//			printf("%d ",p[i][j]);
//			//p指向每一行一维数组的首元素地址，p+i指向第i行一维数组的首元素地址
//			//*（p+j）找到每一行===arr
//			//*（p+i）+j 依次找到每一行的一维数组的各个元素的地址
//			//*(*(p+i)+j)用来遍历每一行的一维数组的元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	int arr2[4] = {1,2,3,4};
//	//print1(arr,3,5);//arr是二维数组首元素的地址，此时要把二维数组（按行分开来）看成一维数组
//	//每一行看成一个元素，组成一个一维数组
//	//print2(arr2,4);//arr2是一维数组首元素的地址，即元素1的地址
//	//利用数组指针
//	printf("\n");
//	print3(arr,3,5);
//	return 0;
//}

//----------------------------------2
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for(; i<3; i++)
//	{
//		int j = 0;
//		for(; j<5; j++)
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//----------------------------------1
//int main()
//{
//	char arr[] = "asdfghj";
//	char* pc = arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//	return 0;
//}
 
//int main()
//{
//	const char* pa = "qwertyuio";//把该常量字符串首地址(即第一个字符)赋给指针pa--加上const
//	//*pa = 'w';//error段错误
//	printf("%s\n",pa);
//	printf("%c\n",*pa);
//	return 0;
//}