#include<iostream>
using namespace std;
#include<list>

//size(); //����������Ԫ�صĸ���
//empty(); //�ж������Ƿ�Ϊ��
//resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��

void printList3(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList3(L1);

	//�ж������Ƿ�Ϊ��
	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1Ԫ�ظ���Ϊ��" << L1.size() << endl;

	}

	//����ָ����С
	L1.resize(10,10000);
	printList3(L1);

	L1.resize(2);
	printList3(L1);

}

int main3()
{

	test04();

	system("pause");

	return 0;
}