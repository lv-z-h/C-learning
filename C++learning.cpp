
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void maopaopaixu();
void yiweishuzu();
int main()
{
	maopaopaixu();
	return 0;
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


