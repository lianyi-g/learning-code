//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	//汉字机内码在计算机中，使用2个字节，每个字节二进制最高位为1
//	//而计算机中二进制为补码形式，最高位为1表示负数
//	//统计字符串中的小于0的字符个数，再/2即可得到汉字的数量
//	int n,i,count;
//	char ch;
//	while(scanf("%d",&n)!=EOF)
//	{
//		getchar();
//		for(i=0; i<n; i++)
//		{
//			count = 0;
//			while((ch=getchar())!='\n')
//			{
//				if(ch<0)
//					count++;
//			}
//			printf("%d\n",count/2);
//		}
//	}
//	return 0;
//}