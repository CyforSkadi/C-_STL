#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//count_if(iterator beg, iterator end, _Pred);
// ������ͳ��Ԫ�س��ִ���
// beg ��ʼ������
// end ����������
// _Pred ν��

//������������
class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};


void test09()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Greater20());

	cout << "����20�����ĸ���Ϊ��" << num << endl;

}

//�Զ�����������
class Person6
{
public:
	Person6(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class AgeGreater20
{
public:
	bool operator()(const Person6 &p)
	{
		return p.m_Age > 20;
	}
};

void test10()
{
	vector<Person6>v;

	Person6 p1("����", 35);
	Person6 p2("����", 35);
	Person6 p3("�ŷ�", 35);
	Person6 p4("����", 40);
	Person6 p5("�ܲ�", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//ͳ�ƴ���20�������
	int num = count_if(v.begin(), v.end(), AgeGreater20());

	cout << "�������20�������Ϊ��" << num << endl;

}

int main()
{

	//test09();
	test10();

	system("pause");

	return 0;
}