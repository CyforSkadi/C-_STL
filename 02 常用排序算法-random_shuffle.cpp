#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<ctime>

//random_shuffle(iterator beg, iterator end);
// ָ����Χ�ڵ�Ԫ�������������
// beg ��ʼ������
// end ����������

void myPrint2(int val)
{
	cout << val << " ";
}

void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//����˳��
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;

}

int main2()
{

	srand((unsigned int)time(NULL));

	test02();

	system("pause");

	return 0;
}