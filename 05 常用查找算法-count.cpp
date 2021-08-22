#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//count(iterator beg, iterator end, value);
// 统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// value 统计的元素

//统计 内置数据类型
void test07()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(), v.end(), 40);

	cout << "40的元素个数为：" << num << endl;

}

//统计 自定义数据类型
class Person5
{
public:
	Person5(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person5 &p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test08()
{
	vector<Person5>v;

	Person5 p1("刘备", 35);
	Person5 p2("关羽", 35);
	Person5 p3("张飞", 35);
	Person5 p4("赵云", 30);
	Person5 p5("曹操", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person5 p("诸葛亮", 35);

	//统计和诸葛亮年龄相同的人数
	
	int num = count(v.begin(), v.end(), p);

	cout << "和诸葛亮年龄相同的人数有：" << num << endl;
}

int main5()
{

	//test07();
	test08();

	system("pause");

	return 0;
}