#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

//sort(iterator beg, iterator end) //��beg��end������Ԫ�ؽ�������

void printDeque6(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{

		cout << *it << " ";
	}
	cout << endl;
}


void test08()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque6(d);


	//����	Ĭ��Ϊ����
	//����֧��������ʵĵ�������������������ʹ��sort�㷨ֱ�ӽ�������
	sort(d.begin(), d.end());
	cout << "�����" << endl;
	printDeque6(d);
}

int main()
{

	test08();

	system("pause");

	return 0;
}