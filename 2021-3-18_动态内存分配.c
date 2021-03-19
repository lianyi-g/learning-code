//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	//C语言规定字符类型数据和整型数据之间可以通用
//	int i;
//	//申请10个int大小的空间
//	int* p = (int*)malloc(10*sizeof(int));//<stdlib.h> 申请成功，地址由指针p维护
//	//int* p = (int*)malloc(INT_MAX);//申请失败
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));//<string.h>
//	}
//	else
//	{
//		for(i=0; i<10; i++)
//		{
//			*(p+i) = i;
//			printf("%d ",*(p+i));
//		}
//	}
//	//free函数是用来释放动态开辟的内存空间，但不是实时的
//	free(p);
//	//printf("%d\n",p);
//	p = NULL;//防止空间被非法访问
//	
//	return 0;
//}