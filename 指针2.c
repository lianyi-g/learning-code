#define _CRT_SECURE_NO_WARNINGS 1

//----------------5 指针关系运算--规范
//#include <stdio.h>
//#define vp_MAX 5
//int main()
//{
//	float arr[vp_MAX] = {0};
//	float* vp;
//	for(vp = &arr[vp_MAX]; vp>&arr[0];)
//	{
//		*--vp = 0;
//		// --vp;*vp = 0;
//		//--优先级高于*vp，且是前置--，故--vp先执行，再执行*vp
//		printf("%p,%d\n",vp,*vp);
//	}
//}

//----------------4 模拟实现strlen函数
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char arr[] = "bit";//这种方式初始化带有\0, bit\0
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//----------------3 指针+-指针--在同一数组中，高地址-低地址=元素个数
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[9]-&arr[0]);
//	return 0;
//}


//----------------2 指针关系运算
//#include <stdio.h>
//#define vp_MAX 5
//int main()
//{
//	float arr[vp_MAX] = {0};
//	float* vp;
//	for(vp = &arr[0]; vp<&arr[vp_MAX];)
//	{
//		*vp++ = 0;// *vp = 0; vp++;
//		printf("%p,%d\n",vp,*vp);
//	}
//	for(vp = &arr[0]; vp<&arr[vp_MAX];vp++)
//	{
//		printf("%d\n",*vp);
//	}
//	return 0;
//}


//----------------1 指针+-整数
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<5; i++)
//	{
//		printf("%d ",*p);
//		p+=2;
//	}
//	//*p++ = i;①--  ++优先级高于*符号，但是这里是后置++故*p先执行
//	//*p = i;②
//	//p++;
//	return 0;
//}