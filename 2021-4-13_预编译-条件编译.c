//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//条件编译

//----------------3
//#define DEBUG 
//int main()
//{
//	//①
//#if defined(DEBUG)
//	printf("hello\n");
//#endif
//	//②
//#ifdef DEBUG 
//	printf("hello\n");
//#endif
//	//①和②是等价的
//	//③
//#if !defined(DEBUG)
//	printf("hi\n");
//#endif
//	//④
//#ifndef DEBUG 
//	printf("hi\n");
//#endif
//	//③和④也是等价的
//	return 0;
//}

//----------------2
//int main()
//{
//#if 1==1
//	printf("hi\n");
//#elif 2==1
//	printf("hello\n");
//#else
//	printf("你好\n");
//#endif
//	return 0;
//}
//----------------1
//#define DEBUG  //有该宏定义时，下面的打印语句才会执行 
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ",arr[i]);
//#endif
//	}
//	return 0;
//}