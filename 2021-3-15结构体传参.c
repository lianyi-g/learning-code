//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//
//struct T
//{
//	char c;
//	int i;
//	double d;
//};
//void init(struct T* ps)//结构体指针用 -> 访问成员变量
//{
//	//要通过函数修改外部的值，应采用传址调用
//	ps->c = 'a';
//	ps->d = 1.223;
//	ps->i = 20;
//}
//void print1(struct T tmp)//结构体变量用 . 访问成员变量
//{
//	printf("%c %d %lf\n",tmp.c,tmp.i,tmp.d);
//}
//void print2(const struct T* ps)
//{
//	//函数功能仅仅要求打印，const修饰保证ps所指向地址内容不可改变，提高安全性
//	printf("%c %d %lf\n",ps->c,ps->i,ps->d);
//}
//int main()
//{
//	//传值调用传参时，参数会临时拷贝，若此时结构体所占内存过大，压栈时会造成不必要的开销
//	//而传址，参数是指针固定4/8个字节
//	//故结构体传参时尽量传地址
//	struct T t = {0};
//	init(&t);//传址
//	print1(t);//传值
//	print2(&t);
//	return 0;
//}