#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

//fill(iterator beg, iterator end, value);
// �����������Ԫ��
// beg ��ʼ������
// end ����������
// value ����ֵ


void myPrint(int val)
{
	cout << val << " ";
}

void test02()
{
	vector<int>v;

	v.resize(10);

	//�����������
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	

}

int main()
{

	test02();

	system("pause");

	return 0;
}