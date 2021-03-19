//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////---------------------2 realloc
//
//int main()
//{
//	int i;
//	int *ptr;
//	int* p = (int*)malloc(5*sizeof(int));
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));//<string.h>
//	}
//	else
//	{
//		for(i=0; i<5; i++)
//		{
//			*(p+i) = i;
//			printf("%d ",*(p+i));
//		}
//	}
//	putchar('\n');
//	//-----------此时觉得空间大小不适合，使用realloc函数
//	ptr = (int*)realloc(p,10*sizeof(int));
//	if(ptr!=NULL)//防止申请内存失败，丢失原有数据
//	{
//		p = ptr;
//		for(i=0; i<10; i++)
//		{
//			*(p+i) = i;
//			printf("%d ",*(p+i));
//		}
//	}
//	free(p);
//	//释放调用过realloc函数的指针，若这个指针和之前malloc指针所指地址不一致，
//	//后者会自动被realloc函数free掉
//	p = NULL;
//	return 0;
//}
//---------------------1 calloc
//int main()
//{
//	int i;
//	int* p = (int*)calloc(10,sizeof(int));
//	//前一个参数是申请的数量，后一个参数是申请的每个元素的大小-字节,会初始化元素为0
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		for(i=0; i<10; i++)
//			printf("%d ",*(p+i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}