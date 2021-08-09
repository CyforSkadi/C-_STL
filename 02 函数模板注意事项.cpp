#include<iostream>
using namespace std;

template<class T>	//template可以替换成class
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1、自动类型推导必须要推导出一致的数据类型T才能使用
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//mySwap(a, b);	//正确
	//mySwap(a, c);	//错误，推导出不一致的T类型

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
//2、模板必须要确定出T的数据类型才能使用
template<class T>
void func()
{
	cout << "func 的调用" << endl;
}

void test03()
{
	func<int>();
}

int main2()
{

	//test02();
	test03();

	system("pause");

	return 0;
}