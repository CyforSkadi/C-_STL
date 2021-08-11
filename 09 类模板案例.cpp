#include<iostream>
using namespace std;
#include<string>

#include"MyArray.hpp"

//��������: ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//	���Զ��������������Լ��Զ����������͵����ݽ��д洢
//	�������е����ݴ洢������
//	���캯���п��Դ������������
//	�ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
//	�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//	����ͨ���±�ķ�ʽ���������е�Ԫ��
//	���Ի�ȡ�����е�ǰԪ�ظ��������������

void printIntArray(MyArray <int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test14()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);	//����β�巨�������в�������
	}

	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2�Ĵ�ӡ���Ϊ:" << endl;
	printIntArray(arr2);

	arr2.Pop_Back();	//βɾ

	cout << "βɾ��arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "βɾ��arr2�Ĵ�СΪ��" << arr2.getSize() << endl;

	printIntArray(arr2);


	/*MyArray<int> arr2(arr1);

	MyArray<int> arr3(100);
	arr3 = arr1;*/

}

//�����Զ�����������
class Person9
{
public:

	Person9() {};

	Person9(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person9>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << " ���䣺" << arr[i].m_Age << endl;
	}
}

void test15()
{
	MyArray<Person9> arr(10);

	Person9 p1("�����", 999);
	Person9 p2("����", 20);
	Person9 p3("���", 18);
	Person9 p4("��", 21);
	Person9 p5("������", 19);

	//�����ݲ���������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArray(arr);

	//�������
	cout << "arr����Ϊ��" << arr.getCapacity() << endl;

	//�����С
	cout << "arr��СΪ��" << arr.getSize() << endl;
}

int main()
{

	//test14();

	test15();

	system("pause");

	return 0;
}