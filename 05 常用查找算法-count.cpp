#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//count(iterator beg, iterator end, value);
// ͳ��Ԫ�س��ִ���
// beg ��ʼ������
// end ����������
// value ͳ�Ƶ�Ԫ��

//ͳ�� ������������
void test07()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(), v.end(), 40);

	cout << "40��Ԫ�ظ���Ϊ��" << num << endl;

}

//ͳ�� �Զ�����������
class Person5
{
public:
	Person5(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person5 &p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test08()
{
	vector<Person5>v;

	Person5 p1("����", 35);
	Person5 p2("����", 35);
	Person5 p3("�ŷ�", 35);
	Person5 p4("����", 30);
	Person5 p5("�ܲ�", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person5 p("�����", 35);

	//ͳ�ƺ������������ͬ������
	
	int num = count(v.begin(), v.end(), p);

	cout << "�������������ͬ�������У�" << num << endl;
}

int main5()
{

	//test07();
	test08();

	system("pause");

	return 0;
}