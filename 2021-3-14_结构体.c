//#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------2

//#include <stdio.h>

//struct node
//{
//	int data;
//	struct node* next;
//	struct node next;//error
//	//结构体自引用，结构体内部包含同类型的结构体变量
	//写法：结构体内无法直接定义同类型结构体变量，但可以定义同类型的结构体指针变量来实现
//	//因为指针变量的大小是确定的
//};

//typedef struct node
//{
//	int data;
//	struct node* next;	//此处不可直接使用node来定义结构体变量，因为还未实现结构体类型重命名
//}node;//结构体类型重命名，将struct node重命名为node
//int main()
//{
//	node n1;
//	struct node n2;
//	return 0;
//}
//-------------------------1
//#include <stdio.h>
//
//struct stu//声明结构体类型
//{
//	char name[20];
//	char id[20];
//	int age;
//	char sex[10];
//}s4,s5;
//
//struct stu s3;//s2 s3 s4均是全局变量
//
//int main()
//{
//	struct stu s1;//定义结构体变量
//	struct stu s2;//s1 s2局部结构体变量
//
//	return 0;
//}