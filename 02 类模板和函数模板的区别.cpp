#include<iostream>
using namespace std;
#include<string>


template<class NameType,class AgeType = int>
class Person2
{
public:

	Person2(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

	void showPerson()
	{
		cout<< "name:" << this->m_Name << " age:" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1、类模板没有自动类型推导的使用方式
void test02()
{
	//Person2 p("孙悟空", 1000);
	Person2<string, int> p("孙悟空", 1000);

	p.showPerson();
}

//2、类模板在模板参数列表中可以有默认参数
void test03()
{
	Person2<string> p("猪八戒",999);

	p.showPerson();

}


int main2()
{

	test02();

	test03();

	system("pause");

	return 0;
}