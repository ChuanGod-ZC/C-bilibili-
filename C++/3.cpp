#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��
//����ѧ���ṹ��
struct student
{
	string name;  //���� 
	int age;     //���� 
	int score;	//���� 
};

int main() {
	//1.����ѧ���ṹ����� 
	struct student s = {"����", 18, 100};
		
	//2.ͨ��ָ��ָ��ṹ����� 
	student * p = &s;
	
	//3.ͨ��ָ����ʽṹ������е����� 
	//ͨ���ṹ��ָ�룬���ʽṹ���е����ԣ���Ҫͨ����ͷ �� -> �� 
	cout << p->name << " "
		 << p->age  << " "
		 << p->score<< endl;
}
