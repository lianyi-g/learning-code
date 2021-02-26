//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	//一瓶汽水一元，两个空瓶可以换一瓶汽水，问20元可以喝几瓶
//	int money,empty,total;
//	total = 0;
//	empty = 0;
//	scanf("%d",&money);
//	//用钱买回的汽水
//	total = money;
//	empty = total;//喝掉得到空瓶
//	//用空瓶换汽水
//	while(empty>=2)
//	{
//		total += empty/2;
//		empty = empty/2 + empty%2;//换回汽水喝掉所得空瓶和数量小于2的空瓶数
//	}
//	printf("total = %d\n",total);
//	return 0;
//}