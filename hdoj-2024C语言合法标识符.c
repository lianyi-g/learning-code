//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int n,i,j,flag,len;
//	char ch[50];
//	while(scanf("%d",&n)!=EOF)
//	{	
//		getchar();
//		for(i=0; i<n; i++)
//		{	
//			//scanf("%s",ch);
//			gets(ch);
//			len = strlen(ch);
//			flag = 0;
//			if((ch[0]>='a'&&ch[0]<='z')||ch[0]=='_'||(ch[0]>='A'&&ch[0]<='Z'))
//			{
//				for(j=1; j<len; j++)
//				{
//					if((ch[j]>='a'&&ch[j]<='z')||
//						ch[j]=='_'||
//						(ch[j]>='A'&&ch[j]<='Z')||
//						(ch[j]>='0'&&ch[j]<='9'))
//					{
//						flag = 1;
//						continue;
//					}
//					else
//					{
//						flag = 0;
//						break;
//					}						
//				}				
//			}
//			if(flag==1)
//					//printf("yes\n");
//					puts("yes");
//			else
//					printf("no\n");
//		}		
//	}
//	return 0;
//}