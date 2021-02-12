#define _CRT_SECURE_NO_WARNINGS 1

//------------------------2
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)//数组越界访问，产生死循环
//	{
//		printf("hello!\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//------------------------1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	//int ret = 1;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//		int ret = 1;
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}