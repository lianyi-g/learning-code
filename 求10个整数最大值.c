#define _CRT_SECURE_NO_WARNINGS 1

////-----------------3 二分查找
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = {2,4,6,8,10,13,15,29,34,66};
//	int left,right,targ,mid;
//	left = 0;
//	right = sizeof(arr)/sizeof(arr[0]) - 1;
//	printf("input\n");
//	scanf("%d",&targ);//scanf输入语句，不能用来赋值，输入的值相当于已经对变量赋了值
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if(arr[mid]>targ)
//			right = mid - 1;
//		else if(arr[mid]<targ)
//			left = mid + 1;
//		else
//		{
//			printf("查找成功！，下标为：%d\n",mid);
//			break;
//		}
//			
//	}
//	if(left>right)
//		printf("查找失败！\n");
//	return 0;
//}

////-----------------2 屏幕输出9*9乘法口诀表
//#include<stdio.h>
//
//int main()
//{
//	int i,j,sum;
//	for(i=1; i<10; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			sum = i*j;
//			printf("%d*%d=%-2d ",i,j,sum);//左对齐--右对齐%2d
//		}
//		printf("\n");
//	}
//	return 0;
//}
////-----------------1
//#include<stdio.h>
//
//int main()
//{
//	int a[10],i;
//	int max = 0;
//	printf("input:\n");
//	for(i=0; i<10; i++)
//		scanf("%d",&a[i]);
//	//for(i=1; i<10 ;i++) //①
//	//{
//	//	int temp = 0;
//	//	if(a[0]<a[i])
//	//	{
//	//		temp = a[0];
//	//		a[0] = a[i];
//	//		a[i] = temp;
//	//	}
//	//}
//	for(i=0; i<10 ;i++) //②
//	{
//		if(max<a[i])
//			max = a[i];
//	}
//	//printf("max = %d\n",a[0]);//①
//	printf("max = %d\n",max);//②
//	return 0;
//}