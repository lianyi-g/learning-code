//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	//´æ´¢
//	int upper[27] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
//	int lower[27] = {0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,
//				-14,-15,-16,-17,-18,-19,-20,-21,-22,-23,-24,-25,-26};
//	int n,j;
//	char i;
//	scanf("%d",&n);
//	while(n--)
//	{
//		getchar();
//		scanf("%c%d",&i,&j);
//		if(isupper(i))//´óÐ´×ÖÄ¸Ê±
//		{
//			printf("%d\n",upper[i-64]+j);
//		}
//		if(islower(i))//Ð¡Ð´×ÖÄ¸Ê±
//		{
//			printf("%d\n",lower[i-96]+j);
//		}
//	}
//	return 0;
//}