#include <stdio.h>

int main()
{
	//c语言语法规定，变量要定义在当前代码块的最前面
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);
	printf("sum=%d\n",num1+num2);
	return 0;
}