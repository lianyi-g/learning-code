//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////------------------------------②
//void move(int arr[],int sz)
//{
//	//设置两个变量指示下标，从左边找偶数，从右边找奇数
//	int left = 0;
//	int right = sz - 1;
//	while(left<right)//使交换停下来
//	{
//		//从左边找偶数
//		while(left<right && arr[left]%2==1)//防止全是奇数
//		{
//			left++;
//		}
//		//从右边找奇数
//		while(left<right && arr[right]%2==0)//防止全是偶数
//		{
//			right--;
//		}
//		if(left<right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
////------------------------------①
////void move(int arr[],int sz)
////{
////	int i;
////	for(i=0; i<sz; i++)
////	{
////		if(arr[i]%2==0)//找到偶数
////		{
////			int j = i;
////			for(; j<sz; j++)
////			{
////				if(arr[j]%2)//和后面的奇数交换
////				{
////					int tmp;
////					tmp = arr[j];
////					arr[j] = arr[i];
////					arr[i] = tmp;
////				}
////			}
////		}
////	}
////}
//void print(int arr[],int sz)
//{
//	int i;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//调整数组使奇数全部位于偶数前面
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}