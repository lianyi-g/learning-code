//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int i,n;
//	_int64 d[21][2] = {{0,0},{1,0},{2,1},{6,2}};
//	for(i=4; i<21; i++)
//	{
//		d[i][0] = i*d[i-1][0];//n!·ÖÄ¸
//		d[i][1] = (i-1)*(d[i-1][1] + d[i-2][1]);//·Ö×Ó
//	}
//	scanf("%d",&n);
//	while(n-- && scanf("%d",&i))
//	{
//		printf("%.2f%%\n",d[i][1]*100.0/d[i][0]);
//	}
//	return 0;
//}