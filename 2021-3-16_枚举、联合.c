//#define _CRT_SECURE_NO_WARNINGS 1

//----------------------------4 联合体大小的计算
//联合的大小至少是最大成员变量的大小
//当最大成员不是最大对齐数的整数倍时，应对齐到最大对齐数的整数倍
//#include <stdio.h>
//
//union un
//{
//	int i;
//	char arr[5];
//	//相当于连续定义5个char类型成员变量
//};
//int main()
//{
//	union un u;
//	printf("%d\n",sizeof(u));//8
//	return 0;
//}

////--------------------------3 利用联合体判断大小端
//#include <stdio.h>
//
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	};
//	union un u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret;
//	ret = check_sys();
//	if(ret==1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//--------------------------2 联合体

//#include <stdio.h>
//
//union um//联合体（共用体）
//{
//	int i;
//	char c;
//};
//int main()
//{
//	//联合成员使共用内存空间的，故一个联合类型变量的大小，至少是最大成员的大小
//	//联合成员不可同时访问
//	union um u;
//	printf("%d\n",sizeof(u));
//	return 0;
//}
//--------------------------1 枚举
//#include <stdio.h>
//
//enum date//枚举是种类型
//{
//	//定义内部，位枚举常量，定义时才可赋值，即赋初值，不赋值时默认从0开始，以1为单位增加
// 
//	MON,//0
//	TUE,//1
//	WEN,//2
//	THR = 7,
//	FRI,//8，若赋值，则其后面的相应递增
//	SAT,//9
//	SUN
//};
//int main()
//{
//	enum date d = SAT;
//	printf("%d\n",sizeof(d));
//	//枚举类型变量所有取值可列有限
//	return 0;
//}