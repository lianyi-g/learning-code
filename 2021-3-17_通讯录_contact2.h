//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define MAX 1000
//#define MAX_NAME 20
//#define MAX_TELE 12
//#define MAX_ADDR 30
//#define MAX_SEX 5
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	DEL,//2
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT
//};
//
//struct PeoInfo//定义一个好友的信息
//{
//	char name[MAX_NAME];
//	char tele[MAX_TELE];
//	int age;
//	char sex[MAX_SEX];
//	char addr[MAX_ADDR];
//};
////定义整个通讯录的信息
//struct Contact
//{
//	struct PeoInfo data[MAX];//存放1000个信息
//	int size;//已有的好友数量
//};
////函数声明
////初始化通讯录
//void InitContact(struct Contact* ps);
////增加指定信息
//void AddContact(struct Contact* ps);
////删除通讯录信息
//void DelContact(struct Contact* ps);
////查找通讯录信息
//void SearchContact(const struct Contact* ps);
////修改通讯录信息
//void ModifyContact(struct Contact* ps);
////展示通讯录信息
//void ShowContact(const struct Contact* ps);
////通讯录信息
//void SortContact(struct Contact* ps);