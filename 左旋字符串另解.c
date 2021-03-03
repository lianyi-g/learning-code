//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int is_left_move(char* str1,char* str2)
//{
//	char* ret;
//	//strcat(str1,str2)--将str2'\0'前的内容追加到str1'\0'的后面，但无法追加自身
//	//追加自身用strncat
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1!=len2)
//		return 0;//两字符串长度不等时，必定不互为左旋字符串
//	//追加
//	strncat(str1,str1,6);//"abcdefabcdef"
//	ret = strstr(str1,str2);
//	//判断str1中是否有str2这样的子串，若找到返回子串首元素的地址，否则返回NULL
//	if(ret==NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if(ret==1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}