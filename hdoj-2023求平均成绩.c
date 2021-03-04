//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	int n,m,i,j,count,flag;
//	double score[50][5];
//	double course[5];
//	double sum_person,sum_course,avg_person,avg_course;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{		
//		for(i=0; i<n; i++)//输入数据
//		{
//			for(j=0; j<m; j++)
//			{
//				scanf("%lf",&score[i][j]);
//			}			
//		}
//		//输出每个人课程的平均成绩==每个人的总成绩/课程总数
//		for(i=0; i<n; i++)
//		{
//			sum_person = 0;
//			for(j=0; j<m; j++)//每行相加
//			{
//				sum_person += score[i][j];//每个人的总成绩
//			}
//			avg_person = sum_person/m;
//			printf("%.2f",avg_person);
//			if(i<n-1)
//				printf(" ");
//		}
//		printf("\n");
//		//输出每门课程的平均成绩==该门课程所有人的分数之和/总人数
//		for(j=0; j<m; j++)
//		{
//			sum_course = 0;
//			for(i=0; i<n; i++)//每列相加
//			{
//				sum_course += score[i][j];//每个人的总成绩
//			}
//			avg_course = sum_course/n;
//			course[j] = avg_course;//存放课程的平均成绩
//			//if(score)
//			printf("%.2f",avg_course);
//			if(j<m-1)
//				printf(" ");
//		}
//		printf("\n");
//		//计算该班级中各科成绩均大于等于平均成绩的学生数量
//		count = 0;
//		for(i=0; i<n; i++)
//		{
//			flag = 1;
//			for(j=0; j<m; j++)
//			{
//				if(course[j]>score[i][j])
//					flag =0;
//			}
//			if(flag==1)
//				count++;
//		}
//		printf("%d\n",count);
//		printf("\n");
//	}
//	return 0;
//}