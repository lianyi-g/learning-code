#define _CRT_SECURE_NO_WARNINGS 1

////------------------4
//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ",i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
//}

////------------------3
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for(i=1 ;i<=10 ;i++)
//	{
//		//不可在for循环体内修改循环变量，防止for循环失去控制
//		//建议for循环语句的条件控制语句写成左闭右开区间，方便代码阅读
//		if(i = 5)
//			printf("hello!\n");
//			//break;
//			//continue;
//		printf("%d ",i);
//	}
//	return 0;
//}

////------------------2
//#include<stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!=EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//------------------1
//#include<stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while((ch = getchar())!=EOF)//
//	{
//		putchar(ch);
//	}
//
//	/*ch  = getchar();//--该语句应放在循环里，否则会出现死循环,getchar()函数返回值为整形int
//	while(ch!=EOF)
//	{
//		putchar(ch);//putchar（带参）
//	}*/
//	return 0;
//}