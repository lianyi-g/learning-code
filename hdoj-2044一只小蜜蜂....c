//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////int f(int a,int b)
////{
////	if(b==a+1)
////		return 1;
////	else if(b==a+2)
////		return 2;
////	else 
////		return f(a,b-1)+f(a,b-2);
////}
//int main()
//{
//	int n,i,j;
//	_int64 d[51] = {1,1,2};
//	for(i=3; i<51; i++)
//	{
//		d[i] = d[i-1] + d[i-2];
//	}
//	scanf("%d",&n);
//	while(n-- && scanf("%d%d",&i,&j))
//	{
//		printf("%I64d\n",i>j ? 0 : d[j-i]);
//	}
//	return 0;
//}