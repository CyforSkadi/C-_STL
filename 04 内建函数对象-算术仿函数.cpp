#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<functional>

//ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>

//template<class T> T plus<T> //�ӷ��º���
//template<class T> T minus<T> //�����º���
//template<class T> T multiplies<T> //�˷��º���
//template<class T> T divides<T> //�����º���
//template<class T> T modulus<T> //ȡģ�º���
//template<class T> T negate<T> //ȡ���º���


//negate һԪ�º��� ȡ��
void test06()
{
	negate<int>n;
	cout<< n(50) << endl;
}

//plus ��Ԫ�º��� �ӷ�
void test07()
{
	plus<int>p;
	cout << p(10, 20) << endl;
}

int main4()
{

	//test06();
	test07();


	system("pause");

	return 0;
}