#include<iostream>
using namespace std;
#include<set>

//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key); //ͳ��key��Ԫ�ظ���



void printSet4(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//����
void test05()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}


	
}


//ͳ��
void test06()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	
	//ͳ��30�ĸ���
	//��set����ͳ�ƽ��Ϊ0��1
	int num = s1.count(30);
	cout << "num = " << num << endl;

}

int main4()
{

	//test05();
	test06();


	system("pause");

	return 0;
}