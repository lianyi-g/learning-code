//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include "file-contact.h"
////实现（函数）功能
//void InitContact(struct Contact * ps)
//{
//	//memset(ps->data,0,sizeof(ps->data));
//	//ps->data = (struct PeoInfo*)calloc(ps->capacity,sizeof(struct PeoInfo));
//	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ*sizeof(struct PeoInfo));
//	if(ps->data == NULL)
//		return;
//	ps->capacity = DEFAULT_SZ;//初始容量
//	ps->size = 0;//已有元素
//
//	LoadContact(ps);
//
//}
//void Check_Capacity(struct Contact* ps);
//void LoadContact(struct Contact* ps)
//{
//	PeoInfo tmp = {0};
//	FILE* pfRead = fopen("contact.date","rb");
//	if(pfRead==NULL)
//	{
//		printf("LoadContact::%s\n",strerror(errno));
//		return;
//	}
//	//fread函数有返回值，返回的是实际读取到的元素个数
//	
//	while(fread(&tmp,sizeof(PeoInfo),1,pfRead))
//	{
//		Check_Capacity(ps);
//		ps->data[ps->size] = tmp;//ps->size 初始值为0
//		ps->size++;
//	}
//
//	fclose(pfRead);
//	pfRead = NULL;
//}
//
//void Check_Capacity(struct Contact* ps)
//{
//	if(ps->size == ps->capacity)
//	{
//		PeoInfo* ptr = (PeoInfo*)realloc(ps->data,(ps->capacity+2)*sizeof(PeoInfo));
//		if(ptr!=NULL)
//		{
//			ps->data = ptr;
//			ps->capacity = ps->capacity + 2;
//			printf("增容成功\n");
//		}
//		else
//		{
//			printf("增容失败\n");
//		}
//		
//	}
//}
//
//void SaveContact(struct Contact* ps)
//{
//	int i;
//	FILE* pfWrite = fopen("contact.date","wb");
//	if(pfWrite==NULL)
//	{
//		printf("SaveContact::%s\n",strerror(errno));
//		return;
//	}
//	for(i=0; i<ps->size; i++)
//	{
//		fwrite(&(ps->data[i]),sizeof(PeoInfo),1,pfWrite);
//	}
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//}
//
//void AddContact(struct Contact* ps)
//{	
//	Check_Capacity(ps);
//
//	//新增的数据下标恰好时size大小
//	printf("请输入名字:->");
//	scanf("%s",ps->data[ps->size].name);
//	printf("请输入年龄:->");
//	scanf("%d",&(ps->data[ps->size].age));
//	//除了age，其他都是数组存储，所以不用再取地址
//	printf("请输入性别:->");
//	scanf("%s",ps->data[ps->size].sex);
//	//ps->data[ps->size].sex，是PeoInfo成员变量sex-数组名，实质上是一个地址，
//	printf("请输入电话:->");
//	scanf("%s",ps->data[ps->size].tele);
//	printf("请输入地址:->");
//	scanf("%s",ps->data[ps->size].addr);
//	ps->size++;
//}
////删除，查找，修改，均会使用到查找下标操作故，专门设置一个函数，来减少代码冗余
////加上static修饰，使该函数只能在该文件内找到，不需要暴露给用户
//static int FindByName(const struct Contact* ps,char name[MAX_NAME])
//{
//	int i;
//	for(i=0; i<ps->size; i++)
//	{
//		if(0==strcmp(ps->data[i].name,name))
//			return i;//找到了，返回下标
//	}
//	return -1;//没有找到
//}
//
//void DelContact(struct Contact* ps)
//{
//	int pos;
//	char name[MAX_NAME];
//	printf("请输入要删除的人的姓名：");
//	scanf("%s",name);
//	//查找删除目标的位置
//	pos = FindByName(ps,name);
//	//删除
//	if(pos==-1)
//		printf("要删除的人不存在！\n");
//	else
//	{
//		int j = 0;
//		//要删除目标后面元素依次前移一个单位
//		for(j=pos; j<ps->size; j++)
//		{
//			ps->data[j] = ps->data[j+1];
//		}
//		ps->size--;
//	}
//	
//}
//
//void SearchContact(const struct Contact* ps)
//{
//	int pos;
//	char name[MAX_NAME];
//	printf("请输入要查找的人的姓名：");
//	scanf("%s",name);
//	//查找目标的位置
//	pos = FindByName(ps,name);
//	//查找
//	if(pos==-1)
//		printf("要查找的信息不存在！\n");
//	else
//	{
//		printf("%-6s\t%-4s\t%-4s\t%-13s\t%-10s\n","名字","年龄","性别","电话","住址");
//		printf("%-6s\t%-4d\t%-4s\t%-13s\t%-20s\n"
//			,ps->data[pos].name
//			,ps->data[pos].age
//			,ps->data[pos].sex
//			,ps->data[pos].tele
//			,ps->data[pos].addr);
//	}
//}
//
//void ModifyContact(struct Contact* ps)
//{
//	int pos;
//	char name[MAX_NAME];
//	printf("请输入要修改的人的姓名：");
//	scanf("%s",name);
//	//查找修改目标的位置
//	pos = FindByName(ps,name);
//	//修改
//	if(pos==-1)
//		printf("要修改的信息不存在！\n");
//	else
//	{
//		printf("请输入名字:->");
//		scanf("%s",ps->data[pos].name);
//		printf("请输入年龄:->");
//		scanf("%d",&(ps->data[pos].age));
//		printf("请输入性别:->");
//		scanf("%s",ps->data[pos].sex);
//		printf("请输入电话:->");
//		scanf("%s",ps->data[pos].tele);
//		printf("请输入地址:->");
//		scanf("%s",ps->data[pos].addr);
//		printf("修改成功！\n");
//	}
//}
//
//int Cmp_By_Age(const void* p1,const void* p2)
//{
//	return (((struct Contact*)p1)->data)->age - (((struct Contact*)p2)->data)->age;//error
//	/*if(((((struct Contact*)p1)->data)->age > (((struct Contact*)p2)->data)->age))
//		return 1;
//	else 
//		return -1;*/
//}
//void SortContact(struct Contact* ps)
//{
//	int sz = sizeof(ps->data)/sizeof(ps->data[0]);
//	qsort(ps->data,sz,sizeof(ps->data[0]),Cmp_By_Age);
//	printf("排序完成！\n");
//}
//void ShowContact(const struct Contact* ps)
//{
//	int i;
//	if(ps->size==0)
//	{
//		printf("通讯录为空\n");
//	}
//	else
//	{
//		//int i;
//		printf("%-6s\t%-4s\t%-4s\t%-13s\t%-10s\n","名字","年龄","性别","电话","住址");
//		for(i=0; i<ps->size; i++)
//		{
//			printf("%-6s\t%-4d\t%-4s\t%-13s\t%-20s\n"
//				,ps->data[i].name
//				,ps->data[i].age
//				,ps->data[i].sex
//				,ps->data[i].tele
//				,ps->data[i].addr);
//		}
//	}
//}
//
//
//
//
//
//void DestroyContact(struct Contact* ps)
//{
//	free(ps->data);
//	ps->data = NULL;
//}