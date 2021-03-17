#define _CRT_SECURE_NO_WARNINGS 1


#include "2021-3-16_通讯录_contact.h"
//实现（函数）功能
void InitContact(struct Contact * ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size = 0;//最初0个元素
}

void AddContact(struct Contact* ps)
{
	if(ps->size == MAX)
		printf("\n");
	else
	{
		//新增的数据下标恰好时size大小
		printf("请输入名字:->");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入年龄:->");
		scanf("%d",&(ps->data[ps->size].age));
		//除了age，其他都是数组存储，所以不用再取地址
		printf("请输入性别:->");
		scanf("%s",ps->data[ps->size].sex);
		//ps->data[ps->size].sex，是PeoInfo成员变量sex-数组名，实质上是一个地址，
		printf("请输入电话:->");
		scanf("%s",ps->data[ps->size].tele);
		printf("请输入地址:->");
		scanf("%s",ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void DelContact(struct Contact* ps)
{

}
void ShowContact(const struct Contact* ps)
{
	int i;
	if(ps->size==0)
		printf("通讯录为空\n");
	else
	{
		printf("%-6s\t%-4s\t%-4s\t%-13s\t%-10s\n","名字","年龄","性别","电话","住址");
		for(i=0; i<ps->size; i++)
		{
			printf("%-6s\t%-4d\t%-4s\t%-13s\t%-20s\n"
				,ps->data[i].name
				,ps->data[i].age
				,ps->data[i].sex
				,ps->data[i].tele
				,ps->data[i].addr);
		}
	}
}