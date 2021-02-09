#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------3 打印一个int二进制的奇数位和偶数位内容
//#include <stdio.h>
//
//void print(int n)
//{
//	int i = 0;
//	int bit = 0;
//	printf("奇数位：\n");
//	//00000000 00000000 00000000 00001111
//	//31 30..........................3210
//	for(i=30; i>=0; i-=2)
//	{
//		bit = (n>>i)&1;
//		printf("%d ",bit);
//
//		//printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for(i=31; i>=1; i-=2)
//	{
//		bit = (n>>i)&1;
//		printf("%d ",bit);
//
//		//printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//-------------------------2 统计两个int整数二进制位不同位的个数
//利用异或--不同为1相同为0--再利用num = num & (num-1)统计1的个数
//#include <stdio.h>
//
//int get_diff_bit(int tmp)
//{
//	int count = 0;
//	while(tmp)
//	{
//		tmp = tmp & (tmp-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m =0;
//	int n = 0;
//	int count = 0;
//	int tmp = 0;
//	scanf("%d%d",&m,&n);
//	tmp = m^n;
//	count = get_diff_bit(tmp);
//	printf("count = %d\n",count);
//	return 0;
//}


//-------------------------1
//#include <stdio.h>
//
//int Count_one(int num)
//{
//	int count = 0;
//	while(num)
//	{
//		num = num & (num-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//11&10-1101&1100 = 1100,
//	//10&9 -1100&1001 = 1000,
//	//观察可得规律，n&n-1，结果和n相比较二进制表示 少了一个1
//
//	int num = 0;
//	int i = 0;
//	scanf("%d",&num);
//	i = Count_one(num);
//	printf("%d\n",i);
//	return 0;
//}