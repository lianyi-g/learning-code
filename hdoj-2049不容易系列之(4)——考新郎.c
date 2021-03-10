//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int i,m,n;
//	_int64 d[21][2] = {{1,0},{1,0},{2,1},{6,2}};
//	for(i=4; i<21; i++)
//	{
//		d[i][0] = i*d[i-1][0];//阶乘数
//		d[i][1] = (i-1)*(d[i-1][1] + d[i-2][1]);//错排数
//	}
//	scanf("%d",&i);
//	while(i-- && scanf("%d%d",&n,&m))
//	{
//		printf("%I64d\n",d[n][0]/d[m][0]/d[n-m][0]*d[m][1]);//组合数*错排数
//	}
//	return 0;
//}