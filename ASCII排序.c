#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符
//	//输入数据有多组，每组占一行，有三个字符组成，之间无空格
//	//对于每组输入数据，输出一行，字符中间用一个空格分开。
//	char a,b,c,tmp;
//	//printf("请输入要比较的字符：\n");
//	while(scanf("%c%c%c",&a,&b,&c)!=EOF)
//	{
//		getchar();
//		if(a>b)
//		{
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		if(a>c)
//		{
//			tmp = a;
//			a = c;
//			c =tmp;
//		}
//		if(b>c)
//		{
//			tmp = b;
//			b = c;
//			c =tmp;
//		}
//		printf("%c %c %c\n",a,b,c);
//	}
//	return 0;
//}