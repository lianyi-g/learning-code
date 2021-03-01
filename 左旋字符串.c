//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char* left,char* right)
//{
//	assert(left);
//	assert(right);
//	while(left<right)
//	{
//		char tmp;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	int len = strlen(arr);
//	assert(arr);
//	assert(k<=len);
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序全部
//}
//int is_left_move(char* s1,char* s2)
//{
//	int i;
//	int len = strlen(s1);
//	assert(s1);
//	assert(s2);
//	for(i=0; i<len; i++)
//	{
//		left_move(s1,1);
//		if(strcmp(s1,s2)==0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	//暴力求解
//	//实现一个函数，左旋k个字符
//	//如ABCD左旋1个字符，结果为BCDA
//	//如ABCD左旋2个字符，结果为CDAB
//	//先存储第一个字符，剩余字符依次前移，之前的那个字符放在数组的最后面元素所在位置
//
//	//三步逆序法
//	//一个字符串，先逆序左边k个，再逆序右边剩下的，最后再逆序整体，可达到目的
//	//先逆序整体，再逆序左边k个，逆序右边剩下的，也可以
//	char arr[] = "abcdef";
//	char arr1[] = "abcdefg";
//	char arr2[] = "cdefgab";
//	int ret;
//	left_move(arr,4);
//	printf("%s\n",arr);
//	//判读是否一个字符串是另一个字符串的左旋字符串
//	//①
//	ret = is_left_move(arr1,arr2);
//	if(ret==1)
//		printf("是左旋字符串！\n");
//	else
//		printf("不是左旋字符串！\n");
//	return 0;
//}