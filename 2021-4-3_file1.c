//#define _CRT_SECURE_NO_WARNINGS 1
//
////--------------------2
//
//#include <stdio.h>
//
//struct  S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s2 = {0};
//	FILE* pf = fopen("test.txt","rb");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//二进制形式读文件
//	fread(&s2,sizeof(struct S),1,pf);
//	printf("%s %d %lf\n",s2.name,s2.age,s2.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//--------------------1
//#include <stdio.h>
//
//struct  S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = {"张三",20,44.3};
//	FILE* pf = fopen("test.txt","wb");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//二进制形式写文件
//	fwrite(&s,sizeof(struct S),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}