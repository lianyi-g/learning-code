//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////①
////int find_num(int arr[3][3],int k,int row ,int col)
////{
////	int x = row-1;
////	int y = 0;
////	while(x>=0 && y<=col-1)
////	{
////		if(arr[x][y]>k)
////			x--;
////		else if(arr[x][y]<k)
////			y++;
////		else
////			return 1;
////	}
////	return 0;
////}
////②
//int find_num(int arr[3][3],int k,int *px ,int *py)
//{
//	int x = *px-1;
//	int y = 0;
//	while(x>=0 && y<=*py-1)
//	{
//		if(arr[x][y]>k)
//			x--;
//		else if(arr[x][y]<k)
//			y++;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}			
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//	int k = 7;
//	int x = 3;//表示三行
//	int y = 3;//表示三列
//	//int ret = find_num(arr,k,3,3);//传值调用①
//	//实现可以返回下标，采用传址调用②
//	//返回型参数--返回多个值
//	int ret = find_num(arr,k,&x,&y);
//	if(ret==1)
//		printf("找到了！下标是（%d，%d）\n",x,y);
//	else
//		printf("没找到！\n");
//	return 0;
//}