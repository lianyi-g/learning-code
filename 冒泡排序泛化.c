//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void swap(char* buf1,char* buf2,int width)
//{
//	int i = 0;
//	for(; i<width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////void* 可以用来接收任意类型的指针，但是其不能直接解引用及进行加减运算，须利用强制类型转换
//void bubble_sort(void* base,int sz,int width,int (* cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for(; i<sz-1; i++)
//	{
//		int j = 0;
//		for(; j<sz-1-i; j++)
//		{
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//				swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//		}
//	}
//}
//
//void test1()
//{
//	int i = 0;
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//
//void test2()
//{
//	int j = 0;
//	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
//	int sz = sizeof(f)/sizeof(f[0]);
//	//qsort(f,sz,sizeof(f[0]),cmp_float);
//	bubble_sort(f,sz,sizeof(f[0]),cmp_float);
//	for(; j<sz; j++)
//	{
//		printf("%f ",f[j]);
//	}
//}
//
//void test3()
//{
//	struct stu s[3]= {{"zhangsan",20},{"lisi",30},{"lianyi",22}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	//qsort(s,sz,sizeof(s[0]),cmp_by_age);
//	//qsort(s,sz,sizeof(s[0]),cmp_by_name);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_by_name);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_by_age);
//
//}
//int main()
//{
//	//test1();
//	//printf("\n");
//	test2();
//	//printf("\n");
//	test3();
//	return 0;
//}