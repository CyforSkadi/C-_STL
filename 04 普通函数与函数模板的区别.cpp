#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ������
//1����ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
//2������ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
//3������ģ�����ʱ�����������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test06()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	cout << myAdd01(a, c) << endl;

	//�Զ������Ƶ�
	//cout << myAdd02(a, c) << endl;

	//��ʾָ������
	cout << myAdd02<int>(a, c) << endl;

}

//�ܽ᣺����ʹ����ʾָ�����͵ķ�ʽ�����ú���ģ�壬��Ϊ�����Լ�ȷ��ͨ������T

int main4()
{
	
	test06();

	system("pause");

	return 0;
}