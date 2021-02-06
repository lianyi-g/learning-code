#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	char c = 'r';
//	int* p = &i;
//	char arr[10] = {0};
//
//	printf("%d\n",sizeof(i));
//
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(c));
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(char [10]));
//	printf("%d\n",sizeof(char*));
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i=0;
//	printf("请输入一个整数：\n",count);
//	scanf("%d",&num);
//	//
//	//while(num)//------①存在问题，比如输入-1时，不能正确显示结果32（11111111111111111111111111111111）
//	//{
//	//	if(num%2==1)
//	//		count++;
//	//	num = num / 2;
//	//}
//
//	//②利用循环移位，每次让最低位与00000000000000000000000000000001按位与，结果(int)即是最低位数值
//
//	for(; i<32; i++)
//	{
//		if(num & 1)
//			count++;
//		num = num>>1;
//	}
//	printf("1的个数为：%d\n",count);
//	return 0;
//}