#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<functional>
#include<algorithm>

//template<class T> bool equal_to<T> //����
//template<class T> bool not_equal_to<T> //������
//template<class T> bool greater<T> //����
//template<class T> bool greater_equal<T> //���ڵ���
//template<class T> bool less<T> //С��
//template<class T> bool less_equal<T> //С�ڵ���

void test08()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//����
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main5()
{

	test08();


	system("pause");

	return 0;
}