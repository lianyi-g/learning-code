//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//①sizeof
//	//char ch1[] = "abcdefg";
//	//printf("%d\n",strlen(ch1));//7
//	//printf("%d\n",sizeof(ch1));//8
//	//printf("%d\n",sizeof(ch1[100]));
//	////依然输出一个字符元素的大小1byte
//	//一维数组
//	//int a[] = {1,2,3,4,5};
//	//printf("%d\n",sizeof(a));//20 计算的是整个数组的大小，5*4=20字节
//	//printf("%d\n",sizeof(&a));//4 计算的是整个数组的地址，
//	////而地址在32位平台上大小均是4字节，在64位平台上大小均是8字节
//	//printf("%d\n",sizeof(a+0));//4 计算的是数组首元素的地址的大小
//	//printf("%d\n",sizeof(a+1));//4 计算的是数组第二个元素的地址的大小
//	//printf("%d\n",sizeof(&a+1));//4 计算的是整个数组地址后面的地址（以数组为一个单位）
//
//	//二维数组
//	//int aa[2][3] = {{1,2,3},{4,5,6}};
//	//printf("%d\n",sizeof(aa));//24 //计算的是整个二维数组的大小，6*4=24字节
//	//printf("%d\n",sizeof(aa+1));
//	////4 计算的是二维数组的第二个元素的地址的大小，第二个元素即第二行，而每行又可看出一个一维数组
//	//printf("%d\n",sizeof(&aa+1));//4 计算的是整个数组地址后面的地址 
//	//printf("%d\n",sizeof(*(aa+1)));//12  *(aa+i)=aa[i],计算的是第二行的大小
//
//	//printf("%d\n",sizeof(aa[0]+1));//4 aa[0]相当于二维数组第一行的数组名（将行看成一维数组）
//	////aa[0]+1是第一行的第二个元素地址
//	//printf("%d\n",sizeof(*(aa[0]+1)));//4 *(aa[0]+1)=aa[0][1]，计算的是第一行的第二个元素的大小
//	//printf("%d\n",sizeof(&aa[0]+1));//4 计算的是第二行的地址的大小
//	//printf("%d\n",sizeof(*(&aa[0]+1)));//12 计算的是第二行的大小
//	////&aa[0] aa[0]不同，前者是二维数组第一行（看成一个一维数组）的数组地址，
//	////后者是二维数组第一行（看成一个一维数组）的首元素的地址，即&aa[0]取出的是一个数组的地址
//
//	//②strlen
//	//字符数组
//	char ch1[] = {'a','b','c','d','e','f'};
//	printf("%d\n",strlen(ch1));//随机值，从首元素地址开始计数，'\0'位置未知，故为随机值
//	printf("%d\n",strlen(ch1+0));//随机值
//	printf("%d\n",strlen(ch1+2));//随机值-2
//
//	printf("%d\n",strlen(&ch1));//随机值
//	printf("%d\n",strlen(&ch1+1));//随机值-6，&ch1为数组地址
//	printf("%d\n",strlen(&ch1[0]+1));//随机值-1，&ch1[0]为数组首元素地址
//
//	char  ch2[] = "abcdef";
//	printf("%d\n",strlen(ch2));//6，字符数组内容："abcdef\0"
//	printf("%d\n",strlen(ch2+0));//6
//	printf("%d\n",strlen(ch2+2));//4
//
//	printf("%d\n",strlen(&ch2));//6
//	printf("%d\n",strlen(&ch2+1));//随机值，&ch2为数组地址
//	printf("%d\n",strlen(&ch2[0]+1));//5，&ch2[0]为数组首元素地址
//	return 0;
//}