//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int int_cmp(const void *p1, const void *p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int n,m,i,j;
//	int s[101];
//	while(scanf("%d%d",&n,&m),m+n)//一个逗号表达式
//	{
//		for(i=0; i<n; i++)
//			scanf("%d",s+i);
//		for(i=0;i<m; i++)
//		{
//			scanf("%d",s+n);//输入A集合后的第一个元素，即B的首元素
//			for(j=0; s[j]!=s[n]; j++)//查找A中是否存在与输入元素相等元素的下标
//				;
//			if(j!=n) 
//				s[j] = s[--n];//如果存在，把A的最后一个元素，赋给下标对应元素，即删除该元素
//		}
//		qsort(s,n,sizeof(int),int_cmp);//将A集合从小到大规则进行比较
//		for(i=0; i<n; i++)
//			printf("%d ",s[i]);
//		printf(n ? "\n" : "NULL\n");
//	}
//	return 0;
//}