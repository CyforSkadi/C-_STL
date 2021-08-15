#include<iostream>
using namespace std;
#include<deque>

//deque.empty(); //�ж������Ƿ�Ϊ��
//deque.size(); //����������Ԫ�صĸ���
//deque.resize(num); //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
//  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
//  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����


void printDeque3(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{

		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque3(d1);

	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
		//deque��û�������ĸ���
	}

	//����ָ����С
	d1.resize(15);
	printDeque3(d1);

	d1.resize(5);
	printDeque3(d1);

}


int main3()
{

	test03();

	system("pause");

	return 0;
}