#pragma once
#include <stdio.h>
#include<string.h>

#define Max_Name 20
#define Max_Sex  5
#define Max_Tel  12
#define Max_Addr 30
#define MAX 1000

typedef struct PeopInfo 
{
	char name[Max_Name];
	int age;
	char sex[Max_Sex];
	char tele[Max_Tel];
	char addr[Max_Addr];
}PeopInfo;  //对结构体重命名为PeopInfo

//通讯录
typedef struct Contact
{
	PeopInfo date[MAX];//存放添加进来的人的信息
	int sz ;//记录当前通讯录中有效信息的个数
}Contact;
//初始化通讯录
void InitContact(Contact* pc);
//增加联系人
void AddContact(Contact* pc);
//打印联系人信息
void PrintfContact(const Contact* pc);//传地址提高效率
//删除联系人
void DelContact(Contact* pc);
//查找指定联系人
void SearchContact(Contact* pc);
//修改指定联系人
void ModifyContact(Contact* pc);

