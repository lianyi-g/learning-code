#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，
//判定该表达式的值是否都为素数。
//输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
//对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。
int  sushu(int n)
{
	int i = 0;
	for(i=2; i<sqrt(n*1.0); i++)
	{
		//不是素数返回0
		if(n%i==0)
			return 0;
	}
	//是素数返回1
	return 1;
}
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		getchar();
		if((a==0&&b==0)||a>b||a<-39||b>50)
			break;
		else
		{
			//全为素数标志，初始设置为1
			int flag = 1;
			int i = 0;
			for(i=a; i<=b; i++)
			{
				int n = i*i+i+41;
				if(sushu(n)!=1)
					flag = 0;
			}
			if(flag==1)
				printf("OK\n");
			else
				printf("Sorry\n");
		}			
	}
	return 0;
}