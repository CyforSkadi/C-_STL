#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//reverse(); //��ת����
//sort(); //��������


void printList6(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��ת
void test07()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "��תǰ��" << endl;
	printList6(L1);

	//��ת��
	L1.reverse();
	cout << "��ת��" << endl;
	printList6(L1);
	
}

bool MyCompare(int v1,int v2)
{
	//���� �õ�һ�������ڵڶ�����
	return v1 > v2;

}


//����
void test08()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "����ǰ��" << endl;
	printList6(L1);

	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//sort(L1.begin(), L1.end());

	//��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
	L1.sort();	//Ĭ�ϴ�С����
	cout << "�����" << endl;
	printList6(L1);

	//����
	L1.sort(MyCompare);
	printList6(L1);



}

int main6()
{

	//test07();
	test08();


	system("pause");

	return 0;
}