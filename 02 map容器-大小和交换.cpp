#include<iostream>
using namespace std;
#include<map>

//size(); //����������Ԫ�ص���Ŀ
//empty(); //�ж������Ƿ�Ϊ��
//swap(st); //����������������


void printMap2(map<int, int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
	}
	cout << endl;

}

//��С
void test02()
{
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));

	if (m.empty())
	{
		cout << "mΪ��" << endl;
	}
	else
	{
		cout << "m��Ϊ��" << endl;
		cout << "m�Ĵ�СΪ��" << m.size() << endl;
	}


}

//����
void test03()
{
	map<int, int>m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));

	map<int, int>m2;

	m2.insert(pair<int, int>(5, 100));
	m2.insert(pair<int, int>(6, 300));
	m2.insert(pair<int, int>(7, 200));
	m2.insert(pair<int, int>(8, 400));

	cout << "����ǰ��" << endl;
	printMap2(m1);
	printMap2(m2);

	cout << "������" << endl;
	m1.swap(m2);
	printMap2(m1);
	printMap2(m2);
	
}

int main2()
{

	//test02();
	test03();

	system("pause");

	return 0;
}