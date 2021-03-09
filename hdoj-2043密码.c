//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main()
//{
//	int m,i,len;
//	char arr[51];
//	scanf("%d",&m);
//	while(m--)
//	{
//		int sum[5] = {0};
//		scanf("%s",arr);
//		len = strlen(arr);
//		for(i=0; i<len; i++)
//		{
//			if(isupper(arr[i]))
//				sum[0] = 1;
//			else if(islower(arr[i]))
//				sum[1] = 1;
//			else if(isdigit(arr[i]))
//				sum[2] = 1;
//			else if(arr[i] == '~'||
//				arr[i] == '!'||
//				arr[i] == '@'||
//				arr[i] == '#'||
//				arr[i] == '$'||
//				arr[i] == '%'||
//				arr[i] == '^')
//				sum[3] = 1;
//		}
//		if(sum[0]+sum[1]+sum[2]+sum[3]>=3 && len>=8 && len<=16)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}