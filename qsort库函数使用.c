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
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void test2()
//{
//	int j = 0;
//	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
//	int sz = sizeof(f)/sizeof(f[0]);
//	qsort(f,sz,sizeof(f[0]),cmp_float);
//	for(; j<sz; j++)
//	{
//		printf("%f ",f[j]);
//	}
//}
//
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test3()
//{
//	struct stu s[3]= {{"zhangsan",20},{"lisi",30},{"lianyi",22}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_by_age);
//	qsort(s,sz,sizeof(s[0]),cmp_by_name);
//}
//int main()
//{
//	//test1();
//	//printf("\n");
//	//test2();
//	//printf("\n");
//	test3();
//	return 0;
//}