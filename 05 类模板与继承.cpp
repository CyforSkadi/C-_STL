#include<iostream>
using namespace std;
#include<string>

template<class T>
class Base
{
	T m;
};

//1��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//2�������ָ�����������޷�����������ڴ�
//class Son:public Base	//���󣬱���Ҫ֪��������T�����ͣ����ܼ̳и�����
class Son:public Base<int>
{

};


void test08()
{
	Son s1;
}

//3����������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:

	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}

	T1 obj;

};

void test09()
{
	Son2<int, char> s2;
}

int main5()
{

	test09();

	system("pause");

	return 0;
}