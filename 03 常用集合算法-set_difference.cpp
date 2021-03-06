#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// 求两个集合的差集
// 注意:两个集合必须是有序序列
// beg1 容器1开始迭代器
// end1 容器1结束迭代器
// beg2 容器2开始迭代器
// end2 容器2结束迭代器
// dest 目标容器开始迭代器

class MyPrint3
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test03()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTarget;
	vTarget.resize(max(v1.size(), v2.size()));

	cout << "v1和v2的差集为：" << endl;
	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), it, MyPrint3());
	cout << endl;

	cout << "v2和v1的差集为：" << endl;
	it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), it, MyPrint3());
	cout << endl;


}

int main()
{

	test03();


	system("pause");

	return 0;
}