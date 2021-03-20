//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////-------------------3
////改正②
//
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	//空指针在一些情况下，可以作为实参
//	str = GetMemory(str);//将申请到的空间始地址返回，便可找到该内存空间
//	strcpy(str,"Hello world!");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//-------------------2 
//有一个指针变量 p，它的值为 0X11A，正好等于变量 c 的地址，
//这种情况我们就称 p 指向了 c，或者说 p 是指向变量 c 的指针。
//*p 表示获取地址 0X11A 上的数据

//改正①
//void GetMemory(char** p)//一级指针变量的地址，由二级指针来维护，二级指针p指向str所在的内存地址
//{
//	*p = (char*)malloc(100);//对二级指针解引用，拿到p指向内容-str的地址空间，即获取到str存储的内容
//	//*p = (char*)malloc(100)使str指针变量存放的内容--地址，变成申请到的内存的起始地址，
//	//此时str便指向了 申请到的内存的起始地址，
//}

//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//改正①应该使用传址调用，传指针变量str的地址，
//	strcpy(str,"Hello world!");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//-------------error代码 笔试题
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	//空指针在一些情况下，可以作为实参
//	GetMemory(str);//（1）error
//	//若参数直接设置为指针变量本身，是值传递，GetMemory函数的形参p是其的一份临时拷贝
//	//GetMemory函数结束后，p销毁，所申请内存无法再找到，即使后面又free操作,也会出现内存泄漏
//	strcpy(str,"Hello world!");//若为（1）情况下，str此时仍然是空指针
//    //即会造成非法访问空指针
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}