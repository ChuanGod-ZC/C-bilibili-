#include<iostream>
#include<string>
using namespace std;

// ����ѧ���ṹ��
struct student
{
	//���� 
	string name;
	//���� 
	int age;
	//���� 
	int score;	
}; 

//��ӡѧ����Ϣ�ĺ���
//1.ֵ����
void printStudent1(struct student s) {
	
	s.age = 100;
	cout << "�Ӻ���1�� " << s.name << " "
		 << s.age << " " << s.score << endl; 
}

//2.ַ����
void printStudent2(struct student * p) {
	p->age = 28;
	cout << "�Ӻ���2�� " << p->name << " "
		 << p->age << " " << p->score << endl;
}  
int main() {
	//���ṹ������������ 
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ 
	
	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;
	
	printStudent1(s);
	printStudent2(&s);
	//cout << s.name << " " << s.age << " " << s.score << endl;
 

}
