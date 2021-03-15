//#define _CRT_SECURE_NO_WARNINGS 1
//
////--------------------------3 内存设置
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char ch[10] = "";
//	int arr[10] = {0};
//	memset(ch,'\n',10);//extern void *memset(void *buffer, int c, int count) 
//	memset(ch,'\0',10);//' '和'\0'的ASCII码值都为0
//
//	memset(ch,10,10);
//	memset(ch,0,10);
//
//
//	memset(ch,'@',10);
//	memset(arr,' ',40);//单位是字节
//	memset(arr,1,40);
//	memset(arr,0,40);
//	memset(arr,'\0',40);
//	return 0;
//}


//--------------------------2 内存比较 
//#include <stdio.h>
//
//#include <string.h>
//int main()
//{
//	int ret1,ret2,ret3;
//	int arr1[] = {1,2,3,6,6};
//	int arr2[] = {1,2,3,5,3};
//	ret1 = memcmp(arr1,arr2,12);//以字节为单位,返回第一个不相等的字节处，参数1字符-参数2字符的值，
//	printf("ret1==%d\n",ret1);
//	ret2 = memcmp(arr1,arr2,13);//相等为0，参数1字符>参数2字符-正数，反之负数
//	printf("ret2==%d\n",ret2);
//	ret3 = memcmp(arr1,arr2,17);
//	printf("ret3==%d\n",ret3);
//	return 0;
//}

//--------------------------1 内存拷贝
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////在C语言标志中不要求实现有重叠情况的拷贝，但vs2010&vs2013库函数的memcpy实现了重叠情况的拷贝
//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//		//src++;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest,const void* src,size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while(count--)
//		{
//			if(dest>=src && (char*)dest<=(char*)src+count)
//			{
//				*((char*)dest + count)= *((char*)src + count);
//			}
//			else
//			{
//				*(char*)dest = *(char*)src;
//				++(char*)dest;
//				++(char*)src;
//			}
//		}
//	return ret;
//}
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = {1,3,2,3,5};
//	int arr2[5] = {0};
//	int arr5[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr6[20] = {0};
//	struct s arr3[] = {{"张三",22},{"李四",34}};
//	struct s arr4[3] = {0};
//	my_memmove(arr5+2,arr5,20);
//	my_memmove(arr6,arr1,sizeof(arr1));
//	my_memcpy(arr4,arr3,sizeof(arr3));
//	my_memcpy(arr2,arr1,sizeof(arr1));
//	return 0;
//}