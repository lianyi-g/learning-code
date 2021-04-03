#define _CRT_SECURE_NO_WARNINGS 1

////----------------------3
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//int b = 11;
//	FILE* pfRead = fopen("test.txt","r");
//	if(pfRead==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	printf("%c",fgetc(pfRead));
//	printf("%c",fgetc(pfRead));
//	printf("%c",fgetc(pfRead));
//	putchar('\n');
//	//printf("%c",b);
//	//printf("%d",b);
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

////----------------------2
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* pfWrite = fopen("test.txt","w");
//	if(pfWrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputc('b',pfWrite);
//	fputc('i',pfWrite);
//	fputc('t',pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//----------------------1
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//绝对路径反斜杠表示的话要防止被识别为转义字符，即用两个反斜杠\\
//	//.  表示当前路径
//	//.. 表示上一级目录
//	//以w写形式打开文件时，若原文件存在，会覆盖原文件的内容；若不存在，则直接新建
//	FILE* pf = fopen("test.txt","r");
//	//以r只读形式打开文件，若不存在则会报错
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}