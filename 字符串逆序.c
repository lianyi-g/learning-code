#define _CRT_SECURE_NO_WARNINGS 1

//------------------------------3 递归实现逆置
//#include <stdio.h>
////递归 实现my_strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	int i =0;
//	if(*str=='\0')
//	{
//		return 0;	
//	}	
//	else
//	{
//		return 1+my_strlen(str+1);
//	}
//}
//void reverse_string(char arr[],int len)
//{
//	//"abcdefg\0"，reverse_string("abcdefg")--可分解为①交换a和g，②逆置bcde,reverse_string("bcdef")
//	//①先用tmp存储a的值，g覆盖a的值，f的后面暂时用一个\0覆盖原先g的位置，a=temp，"gbcdef\0\0"
//	int temp = 0;
//	temp = arr[0];
//	arr[0] = arr[len-1];
//	arr[len-1] = '\0';
//	//递归限制条件
//	if(len>=2)
//		reverse_string(arr+1,len-2);
//	arr[len-1] = temp;
//}
//int main()
//{
//	char arr[] = {"abcdefg"};
//	//char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	reverse_string(arr,len);
//	printf("%s\n",arr);
//	return 0;
//}
//---------------------------2 不使用库函数
#include <stdio.h>

//int my_strlen(char arr[])
//{
//	int i = 0;
//	int len = 0;
//	while(arr[i]!='\0')
//	{
//		len++;
//		i++;
//	}
//	return len;
//}
//递归 实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	int i =0;
//	if(*str=='\0')
//	{
//		return 0;	
//	}	
//	else
//	{
//		return 1+my_strlen(str+1);
//	}
//}
//void reverse_string(char arr[],int len)
//{
//	int left = 0;
//	int right = len-1;
//	while(left<=right)
//	{
//		int temp = 0;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}	
//}
//int main()
//{
//	char arr[] = {"abcdef"};
//	//char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	reverse_string(arr,len);
//	printf("%s\n",arr);
//	return 0;
//}

//---------------------------1
//#include <stdio.h>
//#include <string.h>//使用了库函数
//void reverse_string(char arr[],int len)
//{
//	int left = 0;
//	int right = len-1;
//	while(left<=right)
//	{
//		int temp = 0;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}	
//}
//int main()
//{
//	char arr[] = {"abcdef"};
//	int len = strlen(arr);
//	reverse_string(arr,len);
//	//打印①
//	//int i = 0;
//	//for(i=0; i<len; i++)
//	//{
//	//	printf("%c ",arr[i]);
//	//}
//	//打印②
//	printf("%s\n",arr);
//	return 0;
//}

