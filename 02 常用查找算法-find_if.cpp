#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//find_if(iterator beg, iterator end, _Pred);
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// _Pred ��������ν�ʣ�����bool���͵ķº�����

//������������
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�����5����Ϊ��" << *pos << endl;
	}
}

//�Զ�����������
class Person2
{
public:
	Person2(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class Greater20
{
public:
	bool operator()(Person2 &p)
	{
		return p.m_Age > 20;
	}
};


void test04()
{
	vector<Person2>v;

	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//�����������20����
	vector<Person2>::iterator pos = find_if(v.begin(), v.end(), Greater20());
	if (pos == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�����Ϊ��" << (*pos).m_Name << " ����Ϊ��" << (*pos).m_Age << endl;
	}

	
}

int main2()
{

	//test03();
	test04();


	system("pause");

	return 0;
}