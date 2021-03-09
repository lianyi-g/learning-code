//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////1 3
////3 4
////0 7
////3 8
////15 19
////15 20
////10 15
////8 18
////6 12
////5 10
////4 14
////2 9
//int main()
//{
//	int n,i,j,tmp,count,t;
//	int s[12],e[12];
//	while(scanf("%d",&n),n)
//	{
//		for(i=0; i<n; i++)
//		{
//			scanf("%d",&s[i]);
//			scanf("%d",&e[i]);
//		}
//		for(i=0; i<n-1; i++)//按结束时间将节目排序,冒泡从小到大
//		{
//			for(j=0; j<n-i-1; j++)
//			{//(s[i]==s[j] && e[i]>e[j])||
//				if(e[j]>e[j+1])
//				{
//					tmp = e[j];
//					e[j] = e[j+1];
//					e[j+1] = tmp;
//					tmp = s[j];
//					s[j] = s[j+1];
//					s[j+1] = tmp;
//				}
//			}			
//		}
//		count = 1;
//		t = e[0];
//		for(i=1; i<n; i++)
//		{
//			if(t<=s[i])
//			{
//				count++;
//				t = e[i];
//			}
//		}		
//		printf("%d\n",count);
//	}
//	return 0;
//}