#include<iostream>
#include<string>
#include"Gun.h"
#include"Glock.h"
using namespace std;


void swap(int& a, int& b) {
	int *tmp = new int(a);
	a = b;
	b = *tmp;
	delete tmp;
}

int main() 
{
	Gun *g = new Glock();
	g->Shoot();

	/*int a = 5, b = 16;
	cout << a<<" : "<< b<<endl;
	swap(a, b);
	cout << a << " : " << b << endl;*/

	delete g;
	system("pause");
	return 0;
}