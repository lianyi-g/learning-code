//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct S
//{
//	int n;
//	int arr[0];
//	//[]空可以不设定值，也可以设为0-柔性数组成员-数组的大小是可以调整的
//	//柔性数组，好处：方便释放内存，只需要申请一次内存；内存连续方便访问（访问速度快），
//	//同时可以减少内存碎片
//};
//int main()
//{
//	int i = 0;
//	struct S* ptr;
//	//struct S s;
//	//printf("%d\n",sizeof(s));//4,不包括数组的大小
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	ps->n = 100;
//	for(i=0; i<5; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ",ps->arr[i]);
//	}
//	ptr = (struct S*)realloc(ps,44);
//	if(ptr!=NULL)
//	{
//		ps = ptr;
//		for(i=0; i<10; i++)
//		{
//			ps->arr[i] = i;
//			printf("%d ",ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}