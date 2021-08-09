#include<iostream>
using namespace std;

//1、如果函数模板和普通函数都可以实现，优先调用普通函数
//2、可以通过空模板参数列表来强制调用函数模板
//3、函数模板也可以发生重载
//4、如果函数模板可以产生更好的匹配, 优先调用函数模板

void myPrint(int a, int b);
//{
//	cout << "调用普通函数" << endl;
//}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用模板函数" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "调用重载模板函数" << endl;
}

void test07()
{
	int a = 10;
	int b = 10;

	//myPrint(a, b);

	//通过空模板参数列表强制调用函数模板
	//myPrint<>(a, b);

	//myPrint(a, b, 100);

	//如果函数模板可以产生更好的匹配, 优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);

}

//总结：既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性

int main5()
{

	test07();

	system("pause");

	return 0;
}