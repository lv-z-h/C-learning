#include "Phone.h"

void window() {
	Tongxunlu tongxunlu;
	while (true) {
		cout << "*********************************" << endl;
		cout << "******** 1�������ϵ��***********" << endl;
		cout << "******** 2����ʾ��ϵ��***********" << endl;
		cout << "******** 3��ɾ����ϵ��***********" << endl;
		cout << "******** 4��������ϵ��***********" << endl;
		cout << "******** 5���޸���ϵ��***********" << endl;
		cout << "******** 6�������ϵ��***********" << endl;
		cout << "******** 0���˳�ͨѶ¼***********" << endl;
		cout << "*********************************" << endl;
		cout << "������ѡ� ";
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
		cout << "�����������޷����" << endl;
		return -1;
	}
	string name;
	cout << "������������";
	cin >> name;
	int phonenum;
	cout << "������绰���룺";
	cin >> phonenum;
	string address;
	cout << "�������ַ��";
	cin >> address;
	cout << "������";
	list->person[list->num].name = name;
	list->person[list->num].phone = phonenum;
	list->person[list->num].address = address;
	list->num++;
	return 1;
}
