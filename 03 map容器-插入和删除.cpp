#include<iostream>
using namespace std;
#include<map>

//insert(elem); //�������в���Ԫ��
//clear(); //�������Ԫ��
//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�����
//erase(key); //ɾ��������ֵΪkey��Ԫ��


void printMap3(map<int, int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
	}
	cout << endl;

}

void test04()
{
	map<int, int>m;

	//����
	//��һ��
	m.insert(pair<int, int>(1, 10));
	
	//�ڶ���
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������
	m[4] = 40;

	//������[]���룬����������key������value
	//cout << m[4] << endl;

	printMap3(m);

	//ɾ��
	m.erase(m.begin());
	printMap3(m);
	
	//����keyɾ��
	m.erase(3);
	printMap3(m);

	m.erase(m.begin(), m.end());
	m.clear();
	printMap3(m);


}



int main3()
{

	test04();

	system("pause");

	return 0;
}