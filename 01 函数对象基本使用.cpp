#include<iostream>
using namespace std;
#include<string>

//���غ������ò��������࣬����󳣳�Ϊ��������
//��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���

//1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
class MyAdd
{
public:
	int operator()(int v1,int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	MyAdd myAdd;
	cout<< myAdd(10, 10)<< endl;
}

//2���������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
		this->count++;
	}
	void operator()(string test)
	{
		cout << test << endl;
	}
	int count;	//�ڲ��Լ���״̬
};

void test02()
{
	MyPrint myPrint;
	myPrint("helloworld");
	myPrint("helloworld");
	myPrint("helloworld");

	cout << "myPrint���ô���Ϊ��" << myPrint.count << endl;
}

//3���������������Ϊ��������
void doPrint(MyPrint&mp, string test)
{
	mp(test);
}

void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "hello c++");
}


int main1()
{

	//test01();
	//test02();
	test03();

	system("pause");

	return 0;
}