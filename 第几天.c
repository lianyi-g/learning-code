//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int year,month,day,date,i;
//	int days[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
//	{31,29,31,30,31,30,31,31,30,31,30,31}};
//	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
//	{
//		getchar();
//		//≈–∂œ «∑Ò «»ÚƒÍ
//		date = day;
//		if((year % 4==0 && year % 100!=0)||year % 400==0)
//		{
//			for(i=0; i<month-1; i++)
//			{
//				date += days[1][i];
//			}
//			printf("%d\n",date);
//		}
//		else
//		{
//			for(i=0; i<month-1; i++)
//			{
//				date += days[0][i];
//			}
//			printf("%d\n",date);
//		}
//	}
//	return 0;
//}