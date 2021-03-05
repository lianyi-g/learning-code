#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
//char* my_strncpy(char* dest, const char* src, int n)
//{
//	int i;
//	char* ret = dest;
//	assert(dest && src);
//	for(i=0; i<n; i++)
//	{
//		if(*src=='\0')
//		{
//			*dest = '\0';
//			dest++;
//		}
//		else
//		{
//			*dest = *src;
//			dest++;
//			src++;
//		}
//	}
//	return ret;
//}
//int main()
//{
	//char arr1[] = "hello,world";
	//char arr2[] = "hi";
	//常量字符串作为一个表达式时，代表的不是字符串的内容而是，字符串首元素的地址，
	//printf("%s\n",my_strncpy(arr1,arr2,5));
	//return 0;
//}