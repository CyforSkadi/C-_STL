#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//bool binary_search(iterator beg, iterator end, value);
// ����ָ����Ԫ�أ��鵽 ����true ����false
// ע��: �����������в����ã�������������У����δ֪
// beg ��ʼ������
// end ����������
// value ���ҵ�Ԫ��

void test06()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	//�����Ƿ���9Ԫ��
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "�ҵ���Ԫ��9" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

}

int main4()
{

	test06();


	system("pause");

	return 0;
}