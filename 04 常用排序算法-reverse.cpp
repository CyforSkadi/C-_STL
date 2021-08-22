#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
#include<ctime>

//reverse(iterator beg, iterator end);
// 反转指定范围的元素
// beg 开始迭代器
// end 结束迭代器

void myPrint4(int val)
{
	cout << val << " ";
}

void test04()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), myPrint4);
	cout << endl;

	cout << "反转后：" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint4);
	cout << endl;

}

int main()
{

	test04();

	system("pause");

	return 0;
}