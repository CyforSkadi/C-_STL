#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//replace_if(iterator beg, iterator end, _pred, newvalue);
// 按条件替换元素，满足条件的替换成指定元素
// beg 开始迭代器
// end 结束迭代器
// _pred 谓词
// newvalue 替换的新元素

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

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), MyPrint3());
	cout << endl;

	//将大于等于30的数替换为3000
	replace_if(v.begin(), v.end(), Greater30(), 3000);

	cout << "替换后：" << endl;
	for_each(v.begin(), v.end(), MyPrint3());
	cout << endl;

}

int main3()
{

	test03();

	system("pause");

	return 0;
}