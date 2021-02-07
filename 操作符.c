#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
////结构体也是一种类型，而类型的作用是用来创建变量的
//struct Stu//创建一个结构体类型，类型名是struct Stu
//{
//	//成员变量
//	int age;
//	char name[20];
//	char id[20];
//};
//int main()
//{
//	//使用结构体类型，创建结构体对象,并初始化
//	struct Stu s1 = {21,"涟漪","20210206"};
//	struct Stu* ps = &s1;
//	//访问成员变量方式①结构体变量.成员变量
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.name);
//	printf("%s\n",s1.id);
//	//②利用指针
//	printf("%d\n",(*ps).age);
//	//③利用指针--结构体指针->成员变量
//	printf("%d\n",ps->age);
//	return 0;
//}