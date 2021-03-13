//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n1,n2,n,i;
//	int a[7] = {0,7,13,18,22,25,27};
//	scanf("%d",&n);
//	
//	while(n-- && scanf("%d%d%d",&i,&n1,&n2))
//	{
//		n1 += i>6 ? 8 * (i-6):0;
//		n1 += i>6 ? 27:a[i];
//		//n1 += i>6 ? 27 : i * (15 - i) / 2;		
//		printf(n1>=n2 ? "Yes\n":"No\n");
//	}
//	return 0;
//}