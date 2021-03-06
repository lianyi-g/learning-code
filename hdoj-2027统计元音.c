//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	int j,n,num1,num2,num3,num4,num5;
//	char ch[100];
//	/*scanf("%d",&n);
//	getchar();*/
//	scanf("%d%*c",&n);
//	while(n--)
//	{
//		num1=num2=num3=num4=num5=0;
//		gets(ch);//获取字符串
//		//scanf("%s",&ch);
//		for(j=0; j<strlen(ch); j++)//统计元音
//		{
//			//大写的元音先转化成小写
//			if(tolower(ch[j])=='a')
//				num1++;
//			else if(tolower(ch[j])=='e')
//				num2++;
//			else if(tolower(ch[j])=='i')
//				num3++;
//			else if(tolower(ch[j])=='o')
//				num4++;
//			else if(tolower(ch[j])=='u')
//				num5++;
//		}
//		printf("a:%d\n",num1);//输出元音个数
//		printf("e:%d\n",num2);
//		printf("i:%d\n",num3);
//		printf("o:%d\n",num4);
//		printf("u:%d\n",num5);
//		if(n)
//			//printf("\n");
//		    putchar('\n');
//	}
//	return 0;
//}