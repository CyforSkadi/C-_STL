#include<iostream>
using namespace std;
#include<vector>

//empty(); //�ж������Ƿ�Ϊ��
//capacity(); //����������
//size(); //����������Ԫ�صĸ���
//resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(int num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

void printVector3(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test03()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);

	if (v1.empty())
	{
		cout << "v1Ϊ�գ�" << endl;
	}
	else
	{
		cout << "v1��Ϊ�գ�" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15);
	printVector3(v1);	//����ָ��������Ĭ����0���
	v1.resize(15,100);	//ָ�����ֵ

	v1.resize(5);
	printVector3(v1);	//����ָ�����̣���������ɾ��

}


int main3()
{

	test03();


	system("pause");

	return 0;
}