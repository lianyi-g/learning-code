//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////----------------------------------------2 利用回调函数
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.Add      2.Sub *****\n");
//	printf("*****3.Mul      3.Div *****\n");
//	printf("*****5.Xor      0.exit ****\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void Calc(int (*pf)(int ,int))//函数指针
//{
//	int x,y;
//	printf("请输入两个操作数:>");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));		
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出！\n");
//			break;
//		default:
//			printf("选择错误！\n");
//			break;
//		}			
//	}while(input);
//	return 0;
//}

//----------------------------------------1 利用函数指针数组
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.Add      2.Sub *****\n");
//	printf("*****3.Mul      3.Div *****\n");
//	printf("*****5.Xor      0.exit ****\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input,x,y,ret;
//	int (*pfarr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};//函数指针数组--转移表
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		if(input>=1 && input <=5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d",&x,&y);
//			ret = pfarr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(input==0)
//		{
//			printf("退出！\n");
//		}
//		else
//			printf("选择错误！\n");
//	}while(input);
//	return 0;
//}