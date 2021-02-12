#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------3  结构体传参
//#include <stdio.h>
//typedef struct stu//要定义在print1函数之前
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];	
//}stu;
//
//void print1(struct stu tmp)
//{
//	printf("name: %s\n",tmp.name);
//	printf("age: %d\n",tmp.age);
//	printf("tele: %s\n",tmp.tele);
//	printf("sex: %s\n",tmp.sex);
//}
//void print2(stu* str)//结构体指针
//{
//	printf("name: %s\n",str->name);
//	printf("age: %d\n",str->age);
//	printf("tele: %s\n",str->tele);
//	printf("sex: %s\n",str->sex);
//}
//
//
//
//int main()
//{
//	stu s = {"小绵",20,"13521228889","男"};
//	print1(s);
//	printf("\n");
//	print2(&s);
//	//函数传参的时候是需要压栈的，如果直接传递一个结构体对象（类传值的镜像），结构体可能过大
//	//系统的开销会比较大，故首选print2函数，利用结构体指针，传址
//	return 0;
//}
//-------------------------2

//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr1[] ="hello bit!";
//	struct T t ={"hi",{100,'s',"hello world!",2.33},arr1};
//	printf("%s\n",t.ch);
//	printf("%d\n",t.s.a);
//	printf("%c\n",t.s.c);
//	printf("%s\n",t.s.arr);
//	printf("%lf\n",t.s.d);
//	printf("%s\n",t.pc);
//	return 0;
//}

//-------------------------1
//#include <stdio.h>
//结构体定义相当于一条语句，所以要分号；
//结构体关键字 结构体标签名
//{
//	成员变量
//}变量名a，b，c；//若这样定义，这里的abc是全局结构体 变量，一般不推荐使用
//struct stu//①
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[12];
//};
//typedef struct stu//②
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char tele[12];
//}stu;//typedef重命名关键字，将struct stu 重命名为stu，这里的stu是类型
//int main()
//{
//	struct stu s1;//局部结构体变量--①，struct stu是类型 s1是变量名
//	stu s2;//②，stu是类型 s2是变量名
//	return 0;
//}