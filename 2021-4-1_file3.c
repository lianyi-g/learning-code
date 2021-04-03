#define _CRT_SECURE_NO_WARNINGS 1

//------------------4
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	//scanf/printf 是针对标准输入/输出流的 格式化输入/输出语句
//	//fsacnf/fprintf是针对所有标准输入/输出流的 格式化输入/输出语句
//	//scanf是从字符串中读取格式化的数据
//	//sprintf是把格式化数据输出成（存储到）字符串
//
//	struct S s = {100,3.14f,"abcd"};
//	struct S tmp = {0};
//	char buf[1024] = {0};
//	//把格式化的数据转换成字符串存储到buf中
//	sprintf(buf,"%d %.2f %s",s.n,s.score,s.arr);
//	//printf("%s\n",buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf,"%d %f %s",&(tmp.n),&(tmp.score),tmp.arr);
//
//	printf("%d %.2f %s\n",tmp.n,tmp.score,tmp.arr);
//
//	return 0;
//}

//------------------3
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
//	fprintf(stdout,"%d %.2f %s",s.n,s.score,s.arr);
//	return 0;
//}
//------------------2
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//		return 0;
//	//格式化形式输入数据
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);//读文件，并设置数值
//	printf("%d %f %s\n",s.n,s.score,s.arr);//输出数值
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//------------------1
//#include <stdio.h>
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"bit"};
//	FILE* pf = fopen("test.txt","w");
//	if(pf==NULL)
//		return 0;
//	//格式化形式写文件
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}