#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//swap(container c1, container c2);
// ��������������Ԫ��
// c1����1
// c2����2

class MyPrint4
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};



void test04()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "����ǰ��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint4());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint4());
	cout << endl;

	swap(v1, v2);
	cout << "������" << endl;
	for_each(v1.begin(), v1.end(), MyPrint4());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint4());
	cout << endl;

	

}

int main()
{

	test04();

	system("pause");

	return 0;
}