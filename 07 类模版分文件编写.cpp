#include<iostream>
using namespace std;
#include<string>

//�����ʽ1��ֱ�Ӱ���.cppԴ�ļ�
//#include"person.h"
#include"person.cpp"


//�����ʽ2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��
#include"person.hpp"

//���⣺
//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���


//template<class T1, class T2>
//class Person7
//{
//public:
//
//	Person7(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person7<T1, T2>::Person7(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person7<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//}

void test11()
{
	Person7<string, int> p("Jerry", 18);
	p.showPerson();
}


int main7()
{

	test11();

	system("pause");

	return 0;
}