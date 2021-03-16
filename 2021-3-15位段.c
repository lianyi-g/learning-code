//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////----------------------2
//struct T
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//int main()
//{
//	struct T t;
//	printf("%d\n",sizeof(t));//
//	return 0;
//}

//----------------------1
//struct S
//{
//	//位段和结构体定义类似，不过其变量类型一致
//	//一般时int,unsiged int ,signed int,char（其也属于整形家族）
//	//采用位段的意义时为了节省空间，但其涉及到很多不确定性，不具备跨平台性
//	int a:2;//表示a虽然时int类型，但是只占2个bit位
//	int b:5;
//	int c:10;//位段开辟内存的规则是逐个开辟，不够时，才会再次开辟
//	int d:30;//一般一次是一个int大小(4字节)，或者char类型时的一个char大小(1字节)
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//8个字节
//	return 0;
//}