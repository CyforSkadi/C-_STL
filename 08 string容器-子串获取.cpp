#include<iostream>
using namespace std;
#include<string>

//string substr(int pos = 0, int n = npos) const; //������pos��ʼ��n���ַ���ɵ��ַ���

void test09()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

//ʵ�ò���
void test10()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ�л�ȡ�û�����Ϣ

	int pos = email.find("@");
	cout << "pos = " << pos << endl;

	string userName = email.substr(0, pos);
	cout << "�û���Ϊ�� " << userName << endl;
	

}



int main()
{

	//test09();

	test10();

	system("pause");

	return 0;
}