#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//replace_if(iterator beg, iterator end, _pred, newvalue);
// �������滻Ԫ�أ������������滻��ָ��Ԫ��
// beg ��ʼ������
// end ����������
// _pred ν��
// newvalue �滻����Ԫ��

class MyPrint3
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};

void test03()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), MyPrint3());
	cout << endl;

	//�����ڵ���30�����滻Ϊ3000
	replace_if(v.begin(), v.end(), Greater30(), 3000);

	cout << "�滻��" << endl;
	for_each(v.begin(), v.end(), MyPrint3());
	cout << endl;

}

int main3()
{

	test03();

	system("pause");

	return 0;
}