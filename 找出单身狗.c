#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	//一个整型数组里，只有一个出现一次的数，其他的数均出现两次，找出这个数
//	//①暴力求解：利用两层for循环，统计每个元素出现次数，次数为1即为所求
//	//②利用按位异或运算性质，及数组特点
//	//异或满足交换律，任何数和其本身异或为0，任何数和0异或为其本身
//	int arr[] = {1,2,3,4,5,4,3,2,1,5,6};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(; i<sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗是：%d\n",ret);
//	return 0;
//}