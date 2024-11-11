
#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>
#include "Phone.h"
using namespace std;

struct Student
{
	string name;
	double score;
};
struct Teacher
{
	string name;
	Student stu[5];
};
void teacher_init(Teacher t[], int len);
void printInfo(const Teacher* t);
int main()
{
	window();
}
void shuixianhua() {
	vector<int> num;
	for (int i = 100; i < 1000; i++) {
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = i / 100;
		int d = static_cast<int>(pow(a, 3) + pow(b, 3) + pow(c, 3));
		if (d == i) {
			cout << i << "   ";
			num.push_back(i);
		}
	}
	cout << num.size() << "  ";
	for (auto i : num)
		cout << i << "   ";

}

void qiaozhuozi() {
	for (int i = 1; i < 101; i++) {
		if (i % 10 == 7 || (i / 10) % 10 == 7 || i % 7 == 0)
			cout << "敲桌子" << " ";

		else
			cout << i<<" ";
	}
}
void chengfakoujue() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++)
			cout << j << "*" << i << "=" << j * i<<"  ";
		cout << endl;
	}
}
void yiweishuzu() {
	int a[3] = { 1,3,2 };
	int size = sizeof(a) / sizeof(a[0]);
	for (int i = size-1; i >= 0; i--)
		cout << a[i] << "  ";
}
void maopaopaixu() {
	int a[9] = { 4,2,8,0,5,7,1,3,9 };
	int size = sizeof(a) / sizeof(a[0]);

	for (int i = size - 1; i >= 1; i--) {
		for (int j = 0; j <= i - 1; j++) {
			if (a[j] <a[j + 1]) {
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	for (auto i : a)
		cout << i << "  ";

}
void shuzuhanshu(int* p, int len) {
	for (int i = len-1; i >=1; i--) {
		for (int j = 0; j <= i - 1; j++) {
			if (p[j] < p[j + 1]) {
				int b = p[j];
				p[j] = p[j + 1];
				p[j + 1] = b;
			}
		}
	}
}
void teacher_init(Teacher t[], int len) {
	string nameadd = "ABCDEFG";
	for (int i = 0; i < len; i++){
		t[i].name = "Teacher_";
		t[i].name += nameadd[i];
		for (int j = 0; j < 5; j++) {
			t[i].stu[j].name = "Student_";
			t[i].stu[j].name += nameadd[j];
			int random = rand()%20+80;
			t[i].stu[j].score = random;
		}
	}
}
void printInfo(const Teacher *t){
	cout << t->name << endl;
	for (int i=0;i<5;i++){
		cout << "--------" << (*t).stu[i].name << "  " << (*t).stu[i].score << endl;
	}
}



