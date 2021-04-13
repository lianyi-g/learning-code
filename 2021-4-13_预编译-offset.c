//#define _CRT_SECURE_NO_WARNINGS 1

//------------------2
//模拟实现offsetof
//#include <stdio.h>
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	printf("%d\n",OFFSETOF(struct S,c1));//0
//	printf("%d\n",OFFSETOF(struct S,a));//4
//	printf("%d\n",OFFSETOF(struct S,c2));//8
//	return 0;
//}

//------------------1
//#include <stdio.h>
//#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	printf("%d\n",offsetof(struct S,c1));//0
//	printf("%d\n",offsetof(struct S,a));//4
//	printf("%d\n",offsetof(struct S,c2));//8
//	//offsetof用来计算相对于起始位置的偏移量，单位是字节
//	return 0;
//}