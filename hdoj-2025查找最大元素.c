//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i,len;
//	char c_max;
//	char ch[256];
//	while(scanf("%s",&ch)!=EOF)
//	{
//		len = strlen(ch);
//		c_max = ch[0];
//		//找出最大字母
//		for(i=0; i<len; i++)
//		{
//			if(ch[i]>c_max)
//				c_max = ch[i];
//		}
//		//输出
//		for(i=0; i<len; i++)
//		{
//			putchar(ch[i]);
//			if(ch[i]==c_max)
//				printf("(max)");
//		}
//		printf("\n");
//	}
//	return 0;
//}