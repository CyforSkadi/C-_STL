#include<iostream>
using namespace std;

template<class T>	//template�����滻��class
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1���Զ������Ƶ�����Ҫ�Ƶ���һ�µ���������T����ʹ��
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//mySwap(a, b);	//��ȷ
	//mySwap(a, c);	//�����Ƶ�����һ�µ�T����

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
//2��ģ�����Ҫȷ����T���������Ͳ���ʹ��
template<class T>
void func()
{
	cout << "func �ĵ���" << endl;
}

void test03()
{
	func<int>();
}

int main2()
{

	//test02();
	test03();

	system("pause");

	return 0;
}