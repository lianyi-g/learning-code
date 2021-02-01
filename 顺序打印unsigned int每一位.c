#define _CRT_SECURE_NO_WARNINGS 1

//-------------------2 自定义字符串长度计算函数

//#include<stdio.h>

//int my_strlen(char* str)//循环
//{
//	int count = 0;
//	while(*str!='\0')
//	{
//		str++;
//		count++;
//	}
//	return count;	
//}

//当函数内部不允许创建临时变量时，采用递归实现
//
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = {"hello"};
//	int len = my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}


//-------------------1 递归打印
//#include<stdio.h>
//
//void print(int n)
//{
//	if(n>9)
//		print(n/10);
//	printf("%d ",n%10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}