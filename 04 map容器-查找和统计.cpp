#include<iostream>
using namespace std;
#include<map>

//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key); //ͳ��key��Ԫ�ظ���

void printMap4(map<int, int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
	}
	cout << endl;

}

void test05()
{
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 30));

	//����
	map<int, int>::iterator pos = m.find(3);
	
	if (pos != m.end())
	{
		cout << "�鵽Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	//map����������ظ�keyԪ�أ�count�ṹΪ0����1
	int num = m.count(3);
	cout << "num = " << num << endl;

}



int main4()
{

	test05();

	system("pause");

	return 0;
}