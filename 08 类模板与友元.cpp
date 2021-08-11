#include<iostream>
using namespace std;
#include<string>

//提前让编译器知道Person类模板的存在
template<class T1,class T2>
class Person8;

//类外实现
template<class T1, class T2>
void printPerson2(Person8<T1, T2>  p)
{
	cout << "类外实现----姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
}


template<class T1,class T2>
class Person8
{
	//全局函数 类内实现
	friend void printPerson(Person8<T1,T2>  p)
	{
		cout << "类内实现----姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

	//全局函数 类外实现
	//加空模板参数列表
	//全局函数类外实现的话，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person8<T1, T2>  p);
	

public:

	Person8(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:

	T1 m_Name;
	T2 m_Age;
};




//全局函数 类内实现测试
void test12()
{
	Person8<string, int> p("Tom", 20);

	printPerson(p);
}

//全局函数 类外实现测试
void test13()
{
	Person8<string, int> p("Jerry", 20);

	printPerson2(p);
}

int main8()
{

	//test12();

	test13();

	system("pause");

	return 0;
}