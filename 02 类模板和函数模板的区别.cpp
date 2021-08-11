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

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test02()
{
	//Person2 p("�����", 1000);
	Person2<string, int> p("�����", 1000);

	p.showPerson();
}

//2����ģ����ģ������б��п�����Ĭ�ϲ���
void test03()
{
	Person2<string> p("��˽�",999);

	p.showPerson();

}


int main2()
{

	test02();

	test03();

	system("pause");

	return 0;
}