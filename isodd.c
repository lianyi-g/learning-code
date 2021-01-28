#define _CRT_SECURE_NO_WARNINGS 1

//------------------5
#include<stdio.h>
int main()
{
	char ch = getchar();
	putchar(ch);
	printf("%c\n",ch);
	return 0;
}

////------------------4
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(5==i)
//			continue;
//		//忽略本次循环continue后面的所以语句，直接跳转到条件判断语句，可能会导致隐式死循环
//		printf("%d ",i);
//		i++;
//	}
//	//while(i<=10)
//	//{
//	//	if(5==i)
//	//		break;//跳出break所属最近的大括号代码块，用在循环中时，整个循环都会终止
//	//	printf("%d ",i);
//	//	i++;
//	//}
//}

////------------------3
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日!\n");
//		break;
//	case 6:
//	case 7:
//		printf("周末双休\n");
//		break;
//	default :
//		printf("输入错误！\n");
//		break;
//		
//	}
//	return 0;
//}

////------------------2
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)//switch里面括号的判断表达式类型必须为整形，case后面是整形且是常量表达式
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	default :
//		printf("输入错误！\n");
//		break;
//		
//	}
//	return 0;
//}

////------------------1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		printf("%d  ",i);
//		i+=2;
//	}
//	//while(i<100)
//	//{
//	//	if(0 != i%2)
//	//		printf("%d   ",i);
//	//	i++;
//	//}
//	return 0;
//}