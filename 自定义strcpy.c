#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)//优化⑤--使用const，防止修改的主客体颠倒
//{
//	char* ret = dest;
//	assert(dest!=NULL);//使用断言，条件为真，程序正常执行
//	assert(src!=NULL);//条件为假时，打印提示信息
//	while(*dest++ = *src++)//先解引用，再后置自加--拷贝字符包括‘\0’
//	{
//		;
//	}
//	return ret;//使得函数起作用后更明显
//}

//void my_strcpy(char* dest, char* src)//优化④
//{
//	assert(dest!=NULL);//使用断言，条件为真，程序正常执行
//	assert(src!=NULL);//条件为假时，打印提示信息
//	while(*dest++ = *src++)//先解引用，再后置自加
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)//优化③
//{
//	if(dest!=NULL && src!=NULL)//防止出现空指针，但无法提示错误
//	{
//		while(*dest++ = *src++)//先解引用，再后置自加
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* dest, char* src)//优化②
//{
//	while(*dest++ = *src++)//先解引用，再后置自加
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)//①
//{
//	while(*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//复制\0
//}

//int main()
//{
//	char arr1[] = "#################";
//	char arr2[] = "bit";//有\0
//	//my_strcpy(NULL,arr2);
//	//printf("%s\n",arr1);
//	printf("%s\n",my_strcpy(arr1,arr2));//一个函数的返回值作为另一个函数的参数--函数的链式访问
//	return 0;
//}