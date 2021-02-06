#define _CRT_SECURE_NO_WARNINGS 1

//-------------------------4

//逗号表达式，是用逗号隔开的多个表达式，会从左到右依次执行，但是表达式结果由最后的表达式决定

//-------------------------3
//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	int max = 0;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	i = a++ && ++b && d++; //1 2 3 4
//	//注意逻辑运算的优化处理，当逻辑表达式已经能确定结果后，后面的运算不会执行，这里a++表达式结果为0
//	//i = a++ || ++b || d++; //1 3 3 4
//	printf("a = %d,b = %d,c = %d,d = %d\n",a,b,c,d);
//	max = (a>b?a:b);
//	printf("max=%d\n",max);
//	return 0;
//}

//-------------------------2
//#include <stdio.h>
//
//void test1(int arr1[])
//{
//	printf("%d\n",sizeof(arr1));//① ①和②形参虽然表面上是数组,但是这里传进来的arr实际是 首元素  地址；
//}
//void test2(char arr2[])
//{
//	printf("%d\n",sizeof(arr2));//② 他们都相当于一个指针，而指针大小（字节）在一台计算机是固定的
//}
//int main()
//{
//	int arr1[10] = {0};
//	char arr2[10] = {0};
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//-------------------------1
//#include <stdio.h>
//
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s = a + 5));//sizeof里面的表达式并不会真的进行运算
//	printf("%d\n",s);//故s仍然是0
//}