#define _CRT_SECURE_NO_WARNINGS 1

////-------------------4 交换两数函数 
//#include<stdio.h>
////当实参传给形参时(非地址),形参实际上是实参的一份值的拷贝，一个值的镜像，对形参的修改是不会改变实参的
//
////void exchange(int x, int y)//此函数无法实现交换，因为参数传的是形参，
////{
////	int temp = 0;
////	temp = x;
////	x = y;
////	y = temp;
////}
//void exchange(int* pa, int*pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Please input two int:\n");
//	scanf("%d%d",&a,&b);
//	printf("交换前a=%d,b=%d\n",a,b);
//	//exchange(a,b);//传数值调用
//	//函数调用时一般都是实参，函数执行时，其定义区的参数一般是形参，出了函数范围，形参就失效了，被销毁
//	exchange(&a,&b);//传地址调用
//	printf("交换后a=%d,b=%d\n",a,b);
//	return 0;
//}
////-------------------3 比较两数较大值函数 
//#include<stdio.h>
//
//int bigger(int x, int y)
//{
//	if(x>y)
//		return x;
//	else 
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int big = 0;
//	printf("Please input two int:\n");
//	scanf("%d%d",&a,&b);
//	big = bigger(a,b);
//	printf("big==%d\n",big);
//	return 0;
//}


////------------------2 memset函数
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = {"hello world"};
//	memset(arr, '*', 5);//''-单引号对应字符,“”双引号对应字符串,字符存储时存的是其对应的ASCII码值-int
//	printf("%s\n",arr);
//	return 0;
//}

//------------------1 复制字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = {"bit"};
//	char arr2[] = {"#########"};
//	strcpy(arr2, arr1);//----字符串结束符也会复制过去
//	printf("%s\n",arr2);
//	return 0;
//}