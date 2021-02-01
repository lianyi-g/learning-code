#define _CRT_SECURE_NO_WARNINGS 1

//------------------2 二维数组
//#include<stdio.h>
//
//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5};
//	int i = 0;
//	for(; i<3; i++)
//	{
//		int j = 0;
//		for(; j<4; j++)
//			printf("%d  ",arr1[i][j]);
//		printf("\n");
//	}
//
//	//char arr2[5][6] = {"2",'g'};
//	//int arr3[][4] = {6,7,8,9,10};//二维数组行号可省，但是列号不能省
//	//int arr4[] = {11,12,13,14,15};
//	return 0;
//}

//------------------1 一维数组
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	//strlen sizeof没有关联，strlen是求字符串长度的，功能单一，是库函数
//	//而sizeof可用来计算数组、变量、类型所占内存空间的大小，单位是字节，是一个操作符
//	char arr1[] = "abcd";//用双引号初始化的字符数组，还有一个‘\0’也占内存
//	char arr2[] = {'a','b','c','d'};
//	printf("sizeof = %d\n",sizeof(arr1));
//	printf("sizeof = %d\n",sizeof(arr2));
//	printf("strlen = %d\n",strlen(arr1));
//	printf("strlen = %d\n",strlen(arr2));//打印一个随机值，因为'\0'无法获知
//	//特别注意，strlen是求‘\0’前面的字符个数，注意‘\0’位置
//	return 0;
//}