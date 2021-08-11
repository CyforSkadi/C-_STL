#include<iostream>
using namespace std;
#include<string>

//һ�������ִ��뷽ʽ��


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
		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1��ָ����������� �� ֱ����ʾ�������������
void printPerson1(Person4<string, int> &p)
{
	p.showPerson();
}

void test05()
{
	Person4<string, int> p("�����", 100);
	printPerson1(p);
}

//2������ģ�廯 �� �������еĲ�����Ϊģ����д���
template<class T1,class T2>
void printPerson2(Person4<T1, T2> &p)
{
	p.showPerson();

	//�鿴ģ����������
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

void  test06()
{
	Person4<string, int> p("��˽�", 90);

	printPerson2(p);
}


//3��������ģ�廯 �� ������������� ģ�廯���д���
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T����������Ϊ��" << typeid(T).name() << endl;
}

void test07()
{
	Person4<string, int> p("��ɮ", 30);

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