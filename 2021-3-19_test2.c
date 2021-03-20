//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
////-------------------4
////虽然局部变量被销毁，但是动态申请的内存在堆区，未被销毁
//int* test()
//{
//	int* str = (int*)malloc(40);
//	return str;
//}
//int main()
//{
//	int* ptr;
//	ptr = test();
//	*ptr = 100;
//	printf("%d\n",*ptr);
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//-------------------3
//char* test()//error
//{
//	char ch[] = "hello";
//	return ch;
//}
//int main()
//{
//	char* p = test();
//	//非法访问栈空间地址，打印随机值
//	printf(p);
//	return 0;
//}
//-------------------2
//int* test()
//{
//	//int a = 10;//error
//	//局部变量在栈区创建，函数结束后，变量及其所在空间会被销毁
//	//修改成static修饰，延长变量生命周期,变量可在该函数之外被访问
//	static int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//返回栈空间地址
//	//会造成非法访问内存，
//	printf("%d\n",*p);
//	*p = 20;
//	printf("%d\n",*p);
//	return 0;
//}

//-------------------1
//int main()
//{
//	char* p;
//	char a[] = "hello world";
//	p = a;
//	printf(p);
//	return 0;
//}