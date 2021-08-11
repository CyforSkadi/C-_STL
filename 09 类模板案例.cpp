#include<iostream>
using namespace std;
#include<string>

#include"MyArray.hpp"

//案例描述: 实现一个通用的数组类，要求如下：
//	可以对内置数据类型以及自定义数据类型的数据进行存储
//	将数组中的数据存储到堆区
//	构造函数中可以传入数组的容量
//	提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
//	提供尾插法和尾删法对数组中的数据进行增加和删除
//	可以通过下标的方式访问数组中的元素
//	可以获取数组中当前元素个数和数组的容量

void printIntArray(MyArray <int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test14()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);	//利用尾插法向数组中插入数据
	}

	cout << "arr1的打印输出为：" << endl;
	printIntArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2的打印输出为:" << endl;
	printIntArray(arr2);

	arr2.Pop_Back();	//尾删

	cout << "尾删后arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "尾删后arr2的大小为：" << arr2.getSize() << endl;

	printIntArray(arr2);


	/*MyArray<int> arr2(arr1);

	MyArray<int> arr3(100);
	arr3 = arr1;*/

}

//测试自定义数据类型
class Person9
{
public:

	Person9() {};

	Person9(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person9>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << " 年龄：" << arr[i].m_Age << endl;
	}
}

void test15()
{
	MyArray<Person9> arr(10);

	Person9 p1("孙悟空", 999);
	Person9 p2("韩信", 20);
	Person9 p3("李白", 18);
	Person9 p4("马超", 21);
	Person9 p5("孙尚香", 19);

	//将数据插入数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	printPersonArray(arr);

	//输出容量
	cout << "arr容量为：" << arr.getCapacity() << endl;

	//输出大小
	cout << "arr大小为：" << arr.getSize() << endl;
}

int main()
{

	//test14();

	test15();

	system("pause");

	return 0;
}