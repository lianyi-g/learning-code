//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	//将目标字符串内容src拷贝到目的字符串dest，包括'\0'
//	while(*dest++ = *src++)//'\0'的ASCII码值为0，而‘0’的ASCII值为48
//	{
//		;
//	}
//	//返回拷贝目的地的起始地址
//	return ret;
//}
//int main()
//{
//	char ch1[] = "asdfgh";
//	char ch2[] = "nice!";
//	my_strcpy(ch1,ch2);
//	printf("%s\n",ch1);
//	return 0;
//}