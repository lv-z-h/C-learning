#include "Phone.h"

void window() {
	Tongxunlu tongxunlu;
	while (true) {
		cout << "*********************************" << endl;
		cout << "******** 1、添加联系人***********" << endl;
		cout << "******** 2、显示联系人***********" << endl;
		cout << "******** 3、删除联系人***********" << endl;
		cout << "******** 4、查找联系人***********" << endl;
		cout << "******** 5、修改联系人***********" << endl;
		cout << "******** 6、清空联系人***********" << endl;
		cout << "******** 0、退出通讯录***********" << endl;
		cout << "*********************************" << endl;
		cout << "请输入选项： ";
		int select = -1;
		cin >> select;
		switch (select)
		{
		case 1:
			add(&tongxunlu);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			return;
		default:
			break;
		}
		system("cls");
	}
}
int add(Tongxunlu *list) {
	if (list->num == maxnum) {
		cout << "人数已满，无法添加" << endl;
		return -1;
	}
	string name;
	cout << "请输入姓名：";
	cin >> name;
	int phonenum;
	cout << "请输入电话号码：";
	cin >> phonenum;
	string address;
	cout << "请输入地址：";
	cin >> address;
	cout << "添加完成";
	list->person[list->num].name = name;
	list->person[list->num].phone = phonenum;
	list->person[list->num].address = address;
	list->num++;
	return 1;
}
