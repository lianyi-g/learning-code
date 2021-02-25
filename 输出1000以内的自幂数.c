//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	//自幂数，该数有n位，每一位的n次方之和，等于该数的值
//	int n,sum,i,j;
//	for(i=0; i<100000; i++)
//	{	
//		j = i;
//		n = 1;//统计位数
//		sum = 0;
//		while(j /= 10)
//		{
//			n++;
//		}
//		//判断
//		j = i;
//		while(j)
//		{
//			sum += pow((float)(j % 10),n);
//			j /= 10; 
//		}
//		if(sum==i)
//			printf("%d ",i);
//	}
//	return 0;
//}