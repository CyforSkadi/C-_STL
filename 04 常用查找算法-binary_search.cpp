#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//bool binary_search(iterator beg, iterator end, value);
// 查找指定的元素，查到 返回true 否则false
// 注意: 在无序序列中不可用，如果是无序序列，结果未知
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素

void test06()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	//查找是否有9元素
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "找到了元素9" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

}

int main4()
{

	test06();


	system("pause");

	return 0;
}