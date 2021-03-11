//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <assert.h>
//
//char * my_strstr(const char* p1,const char* p2)
//{
//	char *s1 = (char*)p1;
//	char *s2 = (char*)p2;
//	char *cur = (char*)p1;
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	if(*p2=='\0')
//		return (char*)p1;
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while(*s1!='\0' && *s2!='\0' && *s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2=='\0')
//		{
//			return cur;//找到子串
//		}			
//		cur++;//未找到子串
//	}
//	return NULL;
//}
//int main()
//{
//	char ch1[] = "abdecdedefdededetty";
//	char ch2[] = "def";
//	char* ret = my_strstr(ch1,ch2);
//	if(ret!=NULL)
//		printf("YES,%s\n",ret);
//	else
//		printf("NO\n");
//	return 0;
//}