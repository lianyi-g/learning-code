//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int f(int x)
//{
//	if(x==2)
//		return 1;
//	else if(x==3)
//		return 2;
//	else if(x>3)
//		return f(x-1)+f(x-2);
//}
//int main()
//{
//	int n,m,ret;
//	scanf("%d",&n);
//	while(n--)
//	{
//		scanf("%d",&m);
//		ret = f(m);
//		printf("%d\n",ret);
//	}
//	return 0;
//}
//-------------------------------2
//int main()
//{
//	int n,i;
//	_int64 m[41] = {0,1};//·ÀÖ¹Òç³ö
//	for(i=2; i<41; i++)
//	{
//		m[i] = m[i-1] + m[i-2];
//	}
//	scanf("%d",&n);
//	while(n-- && scanf("%d",&i))
//	{
//		printf("%I64d\n",m[i]);
//	}
//	return 0;
//}