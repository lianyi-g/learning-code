#define _CRT_SECURE_NO_WARNINGS 1

////---------------3
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book book1 = {"c语言程序设计",43};
//	strcpy(book1.name,"C++");
//	book1.price = 20;
//	printf("book1 is : %s\n",book1.name);
//	printf("price is : %d\n",book1.price);
//	//strcpy是字符串拷贝函数
//	return 0;
//}

////---------------2
//#include<stdio.h>
//
////结构体定义
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book book1 = {"c语言程序设计",43};
//	//printf("书名：%s\n",book1.name);
//	//printf("价格：%d\n",book1.price);
//	//采用指针打印信息
//	//struct Book* pd = &book1;
//	//printf("书名：%s\n",pd->name);
//	//printf("价格：%d\n",pd->price);
//
//	//printf("书名：%s\n",(*pd).name);
//	//printf("价格：%d\n",(*pd).price);
//	//.  结构体变量.成员
//	//-> 结构体指针->成员
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//特别注意，c语言中语法规定，变量要定义在代码的前部分，否则可能报“类型缺少；标识符”错误
//	//int a = 29;
//	//int* p = &a;  
//	//printf("a = %d\n",a);
//	//printf("address = %p\n",&a);
//	////%p打印地址
//	//printf("变量a的地址是：%p\n",p);
//	//*p = 39;
//	//printf("修改过后的a的值为：%d\n",a);
////--------------
//	//double pd = 3.14;
//	//double* p = &pd;
//	//*p = 3.14159;
//	//printf("修改过后pd的值为：%lf\n",pd);
//	//printf("修改过后pd的值为：%lf\n",*p);//输出double用%lf
////--------------
//	//指针的大小sizeof只跟机器的位数有关，如32位机器，指针大小均为32bit，4byte
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(float*));
//	printf("%d\n",sizeof(double*));
//	return 0;
//}