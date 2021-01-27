#define _CRT_SECURE_NO_WARNINGS 1

//-----------6
#include<stdio.h>

int main()
{
	int a =10;
	int *p = &a;
	//指针是专门用来存地址的变量
	printf("地址是:%p\n",&a);
	printf("地址是:%p\n",p);
	*p = 20;//* --取地址指向的值，解操作引用符
	printf("指针p指向的值为：%d\n",a);
	return 0;
}



////-----------5
//#include<stdio.h>
////声明使用外部函数，当static修饰函数时，也是改变了其作用域--简单理解，更准确地说是改变了其链接属性
////类似于java中的public->private
//extern int Add(int ,int);
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

////-----------4
//#include<stdio.h>
//int test()
//{
//	//为静态局部变量时，static修饰局部变量，局部变量生命周期变长，而static修饰全局变量时，改变的是(接)
//	//全局变量的作用域--使得静态的全局变量只能在其创建的源文件内部使用
//	static int a = 1;
//	//int a = 1;
//	a++;
//	printf("a = %d\n",a);
//}
//
//int main()
//{
//	int i = 0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////-----------3
//#include<stdio.h>
//int main()
//{
//	int a = 20;//局部变量==自动变量，其前面省略了auto关键字
//	//typedef 类型定义，可直接理解为类型重命名如
//	typedef unsigned int u_int;
//	return 0;
//}


////-----------2
//#include<stdio.h>
//
//int main()
//{
//	//条件操作符--exp1?exp2:exp3  当表达式exp1为真时，整个表达式的值等于表达式exp2的值，否则为exp3的值
//	int a = 100;
//	int b = 29;
//	int max =(a>b?a:b);
//	printf("较大值是：%d\n",max);
//	return 0;
//}

//-----------1
////自加自减
//#include<stdio.h>
//
//int main()
//{
//	//注意打印语句的位置
//	int a = 10;
//	int b = a++;
//	int c = 5;
//	int d = ++c;
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	printf("c=%d\n",c);
//	printf("d=%d\n",d);
//	return 0;
//}