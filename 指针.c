#define _CRT_SECURE_NO_WARNINGS 1

//-------------------3 野指针
//#include <stdio.h>
//
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//指针变量同理，不初始化就是默认随机地址--野指针
//	//越界访问和指针指向的空间已经释放也会导致野指针的产生
//	return 0;
//}

//-------------------2 指针+ - 整数
//#include <stdio.h>
//
//int main()
//{
//	//int a = 0x12345678;
//	//int* pa = &a;
//	//char* pc = &a;
//	//printf("%p\n",pa);
//	//printf("%p\n",pa+1);
//	//printf("%p\n",pc);
//	//printf("%p\n",pc+1);
//
//	int arr[10] = {0};
//	int i = 0;
//	int* p = arr;//这里的arr代表数组首元素的   地址   ，区分两种特殊情况
//	//&+数组名，表示整个数组地址；sizeof（数组名）数组名表示整个数组地址
//	for(; i<10; i++)
//	{
//		*(p+i) = 1;
//	}
//	return 0;
//}

//-------------------1 指针解引用操作
//#include <stdio.h>
//
//int main()
//{
//	//指针类型决定了指针进行解引用时，能够访问空间的大小
//  //也决定了指针走一步有多远（指针的步长）
//	//int* p     *p能访问4个字节  p+1->  4
//	//char* p    *p能访问1个字节  p+1->  1
//	//double* p  *p能访问8个字节  p+1->  8
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	//char* pb = &a;
//	//*pb = 0;
//	return 0;
//} 