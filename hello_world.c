#include<stdio.h>

//int main()
//{
//	//extern可用于引用同一工程的全局变量
//	extern int g_val;
//	printf("g_val = %d\n",g_val);;
//	return 0;
//}

int main()
{
	//c语言语法规定，变量要定义在当前代码块的最前面
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);
	printf("sum=%d\n",num1+num2);
	return 0;
}

//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	int age = 12;
//	float f = 3.14;
//	double d = 3.155222222222;
//	printf("hello world!\n");
//	printf("%c\n",ch);
//	printf("%d\n",age);
//	printf("%f\n",f);
//	printf("%.2f\n",f);
//	printf("%.9lf\n",d);
//	return 0;
//}