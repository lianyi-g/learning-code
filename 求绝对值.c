#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	double num,ret; 
	while(scanf("%lf",&num)!=EOF)
	{
		getchar();
		if(num<0)
		{
			printf("%.2lf\n",-num);
		}
		else
			printf("%.2lf\n",num);
	}
	return 0;
}