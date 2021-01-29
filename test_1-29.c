#define _CRT_SECURE_NO_WARNINGS 1

//----------------------1
#include<stdio.h>
#include<string.h>

int main()
{
	char password[20];
	int i = 0;
	for(i=1; i<=3; i++)
	{
		printf("请输入您的密码：\n");
		scanf("%s",password);
		//strcmp,用来比较两个字符串是否相等，第一个字符串大于第二个字符串时，返回一个大于0的数，反之
		//返回一个小于0的数，相等时返回值为0，而"=="无法用来判断字符串，
		if(strcmp(password,"123456")==0)
		{
			printf("登录成功！\n");	
			break;
		}	
		else
			printf("密码错误，请重试！\n");
	}
	if(i>3) 
		printf("三次密码均错误，程序将自动退出\n");
	return 0;
}

////----------------------1
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n",arr2);
//	return 0;
//}