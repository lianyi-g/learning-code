#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char c = 1;
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(+c));//+c是一个表达式，只要参与表达式运算，小于整型的都会发生整型提升
	printf("%d\n",sizeof(!c));
	return 0;
}