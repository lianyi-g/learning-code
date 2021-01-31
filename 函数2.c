#define _CRT_SECURE_NO_WARNINGS 1

//--------------6 函数声明
#include<stdio.h>

#include"add.h"//引入自定义头文件，使用双引号

int main()
{
	int a = 1;
	int b = 2;
	int sum = Add(a,b);
	printf("sum=%d\n",sum);
	return 0;
}

//----------===5 链式访问

//#include<stdio.h>
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
////  执行顺序③        ②             ①，而printf函数有返回值，返回其打印的字符个数
////  ①打印 43  然后返回值2作为参数，打印2，再之后是返回值1作为参数，打印1
//	return 0;
//}

//-----------4函数每调用一次num+1
//#include<stdio.h>
//
//void Addone(int* x)
//{
//	(*x)++;//自增的优先级比*符号高，故应该加上括号.*x 即是 num的值
//}
//int main()
//{
//	int num = 0;
//	printf("Please input a int num:\n");
//	scanf("%d",&num);
//	printf("函数调用前的数为：%d\n",num);
//	Addone(&num);
//	printf("函数调用后的数为：%d\n",num);
//	return 0;
//}


//-----------3函数实现有序数组二分查找
//#include<stdio.h>
//         //这里的a[],本质上是一个指针，
//int Half(int a[], int k, int sz)
//{
//	int left,right,mid;
//	left = 0;
//	right = sz -1;
//	//right = sizeof(a)/sizeof(a[0]) - 1;//该语句在函数内部无法正确计算数组大小,故调换位置,置于main中
//	//指针在32位系统位4字节，int也为四字节，故right = 0
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if(a[mid]>k)
//			right = mid -1;
//		else if(a[mid]<k)		
//			left = mid + 1;
//		else 
//			return mid;
//	}
//	return -1;
//		
//}
//int main()
//{
//	//函数查找成功返回下标，否则返回-1
//	int arr[] = {1,2,3,4,5,6,7,7,88,90};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = Half(arr, 4,sz);//arr传的是数组首元素的地址
//	if(-1==ret)
//		printf("查找失败，该数不存在！\n");
//	else
//		printf("查找成功，下标为：%d\n",ret);
//	return 0;
//}

//------------------------------------------函数里面尽量不要用打印语句，利用返回值比较好，可移植性强
////-----------2函数实现判断闰年
//#include<stdio.h>
//
//void Runnian(int x)
//{
//	if(x%4==0 && x%100!=0)
//		printf("该年是闰年！\n");
//	else if(x%400==0)
//		printf("该年是闰年！\n");
//	else
//		printf("该年不是闰年！\n");
//}
//int main()
//{
//	int year = 0;
//	printf("请输入要判断的年份 ：\n");
//	scanf("%d",&year);	
//	Runnian(year);
//	return 0;
//}

//-----------1函数判断素数
//#include<stdio.h>
//#include<math.h>
//
//void Sushu(int x)
//{
//	int y = 0;
//	for(y=2; y<=sqrt(1.0*x); y++)
//	{
//		if(x%y==0)
//		{
//			printf("该数不是素数！\n");
//			break;
//		}
//	}
//	if(y>sqrt(1.0*x))
//		printf("该数是素数！\n");
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入要判断的整数：\n");
//	scanf("%d",&i);
//	Sushu(i);			
//	return 0;
//}