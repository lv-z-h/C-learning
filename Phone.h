#include <iostream>
#define maxnum 100
using namespace std;
struct Person
{
	string name;
	string address;
	int phone;
};
struct Tongxunlu
{
	Person person[maxnum];
	int num = 0;
};
void window();
int add(Tongxunlu* list);