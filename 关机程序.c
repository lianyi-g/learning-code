#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <Windows.h>
#include <string.h>

int main()
{
	char arr[20] = {0};
	system("shutdown -s -t 60 ");
	while(1)
	{
		printf("您的电脑将于一分钟后关机，输入“我是猪”，取消命令！\n");
		scanf("%s",arr);
		if(0==strcmp(arr,"我是猪"))//使用strcmp函数比较两个字符串是否相等，相等返回0，前者大于后者返回正数
			system("shutdown -a");
	}
	return 0;
}