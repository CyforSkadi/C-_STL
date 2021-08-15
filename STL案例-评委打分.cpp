#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>


//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�

//ʵ�ֲ��裺
//��������ѡ�֣��ŵ�vector��
//����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//deque��������һ�飬�ۼ��ܷ�
//��ȡƽ����

class Person
{
public:
	Person(string name,int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;

};

//����ѡ��
void createPerson(vector<Person> &v)
{
	string nameSeed = "ABCDE";

	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//��������Person����������
		v.push_back(p);

	}

}

//���
void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ�������deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;	//60~100
			d.push_back(score);

		}

		/*cout << "ѡ��" << it->m_Name << "�÷�Ϊ��" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;*/

		//����
		sort(d.begin(), d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += (*dit);
		}

		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ��
		it->m_Score = avg;
	}
}

//��ӡ����
void showScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << " �÷�Ϊ��" << it->m_Score << endl;
	}
}

int main()
{

	//���������
	srand((unsigned int)time(NULL));

	//1������5��ѡ��
	vector<Person>v;
	createPerson(v);

	//����
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Score << endl;
	//}

	//2����ѡ�ִ��
	setScore(v);

	//3����ʾ���÷�
	showScore(v);

	system("pause");

	return 0;
}