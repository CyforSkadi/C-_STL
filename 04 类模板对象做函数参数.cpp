#include<iostream>
using namespace std;
#include<string>

//一共有三种传入方式：


template<class T1,class T2>
class Person4
{
public:

	Person4(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

	void showPerson()
	{
		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1、指定传入的类型 — 直接显示对象的数据类型
void printPerson1(Person4<string, int> &p)
{
	p.showPerson();
}

void test05()
{
	Person4<string, int> p("孙悟空", 100);
	printPerson1(p);
}

//2、参数模板化 — 将对象中的参数变为模板进行传递
template<class T1,class T2>
void printPerson2(Person4<T1, T2> &p)
{
	p.showPerson();

	//查看模板数据类型
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

void  test06()
{
	Person4<string, int> p("猪八戒", 90);

	printPerson2(p);
}


//3、整个类模板化 — 将这个对象类型 模板化进行传递
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T的数据类型为：" << typeid(T).name() << endl;
}

void test07()
{
	Person4<string, int> p("唐僧", 30);

	printPerson3(p);
}

int main4()
{

	//test05();

	//test06();

	test07();

	system("pause");

	return 0;
}