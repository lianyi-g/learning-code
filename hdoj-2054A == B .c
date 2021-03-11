//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//void A(char* s)
//{
//	int len = strlen(s);
//	char *p = s+len-1;//指向末尾的指针
//	if(strchr(s,'.'))
//	{
//		while(*p == '0')//指针前移去掉后面的0
//		{
//			*p-- = 0;//将原本的‘0’--ASCII->48，改成‘\0'ASCII->0，并且指针前移一个单位
//		}			
//		if(*p == '.')
//			*p = 0;
//	}
//}
//int main()
//{
//	char *pa,*pb;
//	char a[100024],b[100024];
//	while(scanf("%s%s",&a,&b)!=EOF)
//	{
//		pa = a;
//		pb = b;
//		while(*pa =='0')//指针后移去掉整数部分有效数位前面的0--如00001.120
//			pa++;
//		while(*pb =='0')
//			pb++;
//		A(pa);//使指针指向小数部分的有效数位
//		A(pb);
//		puts(strcmp(pa,pb) ? "NO" : "YES");
//	}
//	return 0;
//}