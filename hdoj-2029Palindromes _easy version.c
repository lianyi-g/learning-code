//#define _CRT_SECURE_NO_WARNINGS 1
////“回文串”
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int n,i,len,flag;
//	char ch[100];
//	while(scanf("%d",&n)!=EOF)
//	{
//		for(i=0; i<n; i++)
//		{
//			char* start;//设置指向左边字符的指针
//			char* end;//设置指向右边字符的指针
//			scanf("%s",&ch);
//			start = ch;
//			len = strlen(ch);
//			end = ch+len-1;
//			flag = 1;//是否是回文串标志
//			while(start<end)
//			{
//				if(*start!=*end)
//					flag = 0;
//				start++;
//				end--;
//			}
//			if(flag==1)
//				printf("yes\n");
//			else
//				printf("no\n");
//		}
//
//	}
//
//	return 0;
//}