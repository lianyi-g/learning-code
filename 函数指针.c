//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////------------------------------------3 函数指针数组
//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//	char* (*pf)(char*,const char*) = my_strcpy;
//	char* (*pfarr[4])(char*,const char*) = {};
//	return 0;
//}

//------------------------------------2 
//void (* signal(int ,void(*)(int)) )(int);//特殊
////void (*  )(int)  signal(int ,void(*)(int));error，原本是返回类型+函数名+形参
//
////简化，特殊重命名
//typedef void (*pfun_t)(int);//特殊
////typedef void (*)(int) pfun_t;error
//pfun_t signal(int, pfun_t);
//------------------------------------1
//void test(char* str)//形参-字符指针
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void (*p)(char*) = test;// 函数指针
//	(*p)("hello world!");//实参传入字符串
//	return 0;
//}