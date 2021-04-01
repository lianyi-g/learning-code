#define _CRT_SECURE_NO_WARNINGS 1

//----------------------3
//#include <stdio.h>
//
//int main()
//{
//	//1和2等价都是从标准输入流读取，再输出到标准输出流
//	char buf[1024] = {0};
//	//1
//	fgets(buf,1024,stdin);
//	fputs(buf,stdout);
//	//2
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//----------------------2
//#include <stdio.h>
//
//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//写文件 行输入函数
//	fputs("hello\n",pf);
//	fputs("哈哈哈哈哈哈\n",pf);
//
//	fputs("world\n",pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//----------------------1
//#include <stdio.h>
//
//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
	//读文件
//	fgets(buf,1024,pf);
//	printf("%s",buf);//若该行有'\n'换行符，则buf里面也会一起存储
//	fgets(buf,1024,pf);
//	printf("%s",buf);
//	fgets(buf,1024,pf);
//	printf("%s",buf);//文件内容的结尾没有换行符
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}