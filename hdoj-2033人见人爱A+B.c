//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//typedef unsigned long UL;
//int main()
//{
//	int n;
//	UL AH,AM,AS,BH,BM,BS,ADD_M,ADD_H,S_TOTAL,M_TOTAL;
//	scanf("%d%*c",&n);
//	while(n--)
//	{
//		ADD_M = ADD_H = 0;
//		scanf("%lu%lu%lu%lu%lu%lu",&AH,&AM,&AS,&BH,&BM,&BS);
//		//Ãë
//		S_TOTAL = AS+BS;
//		if(S_TOTAL>=60)
//		{
//			AS = S_TOTAL%60;
//			ADD_M = S_TOTAL/60;
//		}
//		else
//			AS = S_TOTAL;
//		//·Ö
//		AM = AM+ADD_M;
//		M_TOTAL = AM+BM;
//		if(M_TOTAL>=60)
//		{
//			AM = M_TOTAL%60;
//			ADD_H = M_TOTAL/60;
//		}
//		else
//			AM = M_TOTAL;
//		//Ê±
//		AH = AH + ADD_H + BH;
//		printf("%lu %lu %lu\n",AH,AM,AS);
//	}
//	return 0;
//}