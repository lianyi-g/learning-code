//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//int main()
//{
//	char ch[4];
//	while(scanf("%s",&ch)!=EOF)
//	{
//		int i;
//		qsort(ch,3,1,cmp_char);
//		for(i=0; i<3; i++)
//		{
//			putchar(ch[i]);
//			if(i<2)
//				putchar(' ');
//		}
//		putchar('\n');
//	}
//	return 0;
//}