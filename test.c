#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


int main()
{
	//&按位与
	//|按位或
	//^按位异或，相同为1，不同为0
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while(i<10)
	{
		printf("%d\t",arr[i]);
		i++;
	}
	return 0;
}

//int Add(int x,int y)
//{
//	int sum = 0;
//	return sum = x+y;
//}
//
//int main()
//{
//	int a = 19;
//	int b = 23;
//	int sum = 0;
//	sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("我要学习！");
//	while(line<=20000)
//	{
//		printf("我敲了:第%d行有效代码\n",line);
//		line++;
//	}
//	if(line>20000)
//		printf("现在我可以有个好offer!\n");
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入我们：\n");
//	printf("你要好好学习吗？>(1/0):\n");
//	scanf("%d",&input);
//	if(input==1)
//		printf("一个好offer!\n");
//	else
//		printf("回家卖红薯!\n");
//	return 0;
//}


//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	//\ddd（1~3个八进制数字）为转义八进制；\xdd（2个二进制数字）为转义十六进制；转义字符整体看作一个字符
//	printf("%c\n",'\132');
//	printf("%c\n",'\32');
//	//打印的是八进制对应的十进制数值的 ASCII码值对应的字符
//	printf("%c\n",'\x61');
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = {'a','b','c','d','\0'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = {'a','b','c','d','\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum SEX s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

////define定义标识符常量，const定义常变量，其本质仍然是变量
//#define MAX 100
//int main()
//{
//	int arr[MAX] = {0};
//	return 0;
//}

//int main()
//{
//	//c语言语法规定，变量要定义在当前代码块的最前面
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d",&num1,&num2);
//	printf("sum=%d\n",num1+num2);
//	return 0;
//}