//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	//0和9对应的ASCII码值分别为48 57 而'\0'它的ASCII码值为0
//	int n,count,i;
//	char ch[100];
//	scanf("%d",&n);
//	while(n--)
//	{
//		count = 0;
//		scanf("%s",ch);
//		for(i=0; i<100 && ch[i]!='\0'; i++)
//		{
//			if(ch[i]>='0' && ch[i]<='9')
//				count++;
//		}
//		printf("%d\n",count);
//	}	
//	return 0;
//}