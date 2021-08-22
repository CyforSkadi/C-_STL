#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//count_if(iterator beg, iterator end, _Pred);
// 按条件统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// _Pred 谓词

//内置数据类型
class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};


void test09()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Greater20());

	cout << "大于20的数的个数为：" << num << endl;

}

//自定义数据类型
class Person6
{
public:
	Person6(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class AgeGreater20
{
public:
	bool operator()(const Person6 &p)
	{
		return p.m_Age > 20;
	}
};

void test10()
{
	vector<Person6>v;

	Person6 p1("刘备", 35);
	Person6 p2("关羽", 35);
	Person6 p3("张飞", 35);
	Person6 p4("赵云", 40);
	Person6 p5("曹操", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//统计大于20岁的人数
	int num = count_if(v.begin(), v.end(), AgeGreater20());

	cout << "年龄大于20岁的人数为：" << num << endl;

}

int main()
{

	//test09();
	test10();

	system("pause");

	return 0;
}