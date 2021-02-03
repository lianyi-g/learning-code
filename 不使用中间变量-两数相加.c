#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	//-------------------②利用异或运算
//	int a = 5;
//	int b = 3;
//	printf("交换前两数为：a=%d,b=%d\n",a,b);
//	a = a ^ b;//按位异或，相同为0，不同为1，不会产生进位，故不会产生溢出的问题
//	b = a ^ b;
//	a = a ^ b;//但可读性差，代码执行效率低
//	printf("交换后两数为：a=%d,b=%d\n",a,b);
//	return 0;
//	//这种方式存在，数太大时溢出的现象 int-4byte--①
//	//int a = 5;
//	//int b = 3;
//	//printf("交换前两数为：a=%d,b=%d\n",a,b);
//	//a = a + b;//执行后a的值变成 a+b的和
//	//b = a - b;//等价于，b = a+b - b,即此时b = 一开始赋值的a，a还是两数之和
//	//a = a - b;//等价于，a = a+b - a,即此时a = 一开始赋值的b
//	//printf("交换后两数为：a=%d,b=%d\n",a,b);
//	//return 0;
//}