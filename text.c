#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"
//通讯录
// 1、通讯录中能存放1000个人的信息
//每个人的信息：
//名字+年龄+性别+电话+地址
//2、增加指定人的信息
//3、删除指定人的信息
//4、修改指定人的信息
//5、查找指定人的信息
//6、排序通讯录的信息
//

void menu() {
	printf("***************************************************\n");
	printf("**********    1、add        2、del     ************\n");
	printf("**********    3、search     3、modify  ************\n");
	printf("**********    5、sort       6、print  *************\n");
	printf("**********    0、exit                  ************\n");
	printf("***************************************************\n");
}

enum Option {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,

};

int main() {
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);

	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) {
			case ADD:
				//增加联系人的信息
				AddContact(&con);
				break;
			case DEL:
				//删除联系人的信息
				DelContact(&con);
				break;
			case SEARCH:
				//查找指定联系人
				SearchContact(&con);
				break;
			case MODIFY:
				//修改指定联系人
				ModifyContact(&con);
				break;
			case SORT:
				//
				break;
			case PRINT:
				//打印联系人信息
				PrintfContact(&con);
				break;
			case EXIT:
				printf("退出");
				break;
			default:
				printf("选择错误，请重新选择。");
				break;
			}
	} while (input);
	return 0;
}