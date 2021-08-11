#include<iostream>
using namespace std;
#include<string>

//��ǰ�ñ�����֪��Person��ģ��Ĵ���
template<class T1,class T2>
class Person8;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person8<T1, T2>  p)
{
	cout << "����ʵ��----������" << p.m_Name << " ���䣺" << p.m_Age << endl;
}


template<class T1,class T2>
class Person8
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson(Person8<T1,T2>  p)
	{
		cout << "����ʵ��----������" << p.m_Name << " ���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
	//ȫ�ֺ�������ʵ�ֵĻ�����Ҫ�ñ�������ǰ֪����������Ĵ���
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




//ȫ�ֺ��� ����ʵ�ֲ���
void test12()
{
	Person8<string, int> p("Tom", 20);

	printPerson(p);
}

//ȫ�ֺ��� ����ʵ�ֲ���
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