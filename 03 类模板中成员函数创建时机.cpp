#include<iostream>
using namespace std;
#include<string>

//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建

class Person31
{
public:

	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person32
{
public:

	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:

	T obj;

	//类模板中的成员函数
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};


void test04()
{
	MyClass<Person32> m;
	//m.func1();
	m.func2();

}


int main3()
{

	test04();

	system("pause");

	return 0;
}