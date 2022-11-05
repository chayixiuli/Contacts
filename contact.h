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
}PeopInfo;  //�Խṹ��������ΪPeopInfo

//ͨѶ¼
typedef struct Contact
{
	PeopInfo date[MAX];//�����ӽ������˵���Ϣ
	int sz ;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;
//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//������ϵ��
void AddContact(Contact* pc);
//��ӡ��ϵ����Ϣ
void PrintfContact(const Contact* pc);//����ַ���Ч��
//ɾ����ϵ��
void DelContact(Contact* pc);
//����ָ����ϵ��
void SearchContact(Contact* pc);
//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

