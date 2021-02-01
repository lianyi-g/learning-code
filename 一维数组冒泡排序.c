#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//数组名是元素首地址（只是一个地址，只占四个字节），有两个例外
	//1.sizeof（数组名）-数组名表示整个数组，整个表达式计算的是 整个 数组所占内存的大小，单位是字节
	//2.&数组名，数组名代表整个数组，表达式取出的是 整个 数组的地址
	int arr[] = {1,2,3,4,5};
	printf("%p\n",arr);
	printf("%p\n",&arr);
	printf("%p\n",&arr[0]);
	printf("%d\n",*arr);
	return 0;
}

//#include<stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	//先确定排序的趟数，
//	int i = 0;
//	for(; i<sz; i++)
//	{
//		//再确定每次比较的次数--每一趟排序
//		int j = 0;
//		//优化处理如果有一趟的排序，没有发生交换则跳出
//		//初始设置标志变量为1，假设有序
//		int flag = 1;
//		for(; j<sz-1-i; j++)
//		{
//			int temp = 0;
//			if(arr[j]>arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = 0;//标志本趟排序不完全有序
//			}
//		}
//		if(1==flag)
//			break;
//	}	
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	for(; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}