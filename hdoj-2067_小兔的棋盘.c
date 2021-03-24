//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int i,j;
//	_int64 a[36] = {1};
//	_int64 b[36] = {0};
//	for(i=1; i<36; i++)
//	{
//		for(j=1; j<i; j++)
//			a[j] += a[j-1];
//		b[i] = a[i] = a[i-1];
//	}
//	for(j=1; scanf("%d",&i),i+1; j++)
//		printf("%d %d %64d\n",j,i,2*b[i]);
//}