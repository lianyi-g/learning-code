//#define _CRT_SECURE_NO_WARNINGS 1
//
////-------------------3
//#include <stdio.h>
//
//#define PRINT(X) printf("the value of "#X" is %d\n",X);
////当X前面有一个#时且用双引号引起那么，其会被替换为对应的字符串，而不是值的替换
//int main()
//{
//	//利用字符串拼接，将参数插入到字符串中
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n",a)
//	//"the value of a is %d\n",a)
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n",b)
//	return 0;
//}

//-------------------2
//#include <stdio.h>
//
//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	
//	
//	printf("MAX=%d\n",MAX);
//	//字符串里面的MAX并不会被替换
//
//	return 0;
//}
//-------------------1
//#include <stdio.h>
//
//#define SQUARE(X) X*X
//int main()
//{
//	int ret,ret2;
//	ret = SQUARE(5);
//	printf("%d\n",ret);
//
//	//宏是替换，不是传参
//	ret2 = SQUARE(5+1);// ret2 = 5+1*5+1 ==11,而不是6*6
//	printf("%d\n",ret2);
//	//为了防止某些情况下的计算顺序出错，定义宏时最好用（）让符号成为一个整体
//	//#define SQUARE(X) (X)*(X)
//	//#define SQUARE(X) ((X)+(X))
//
//
//	return 0;
//}