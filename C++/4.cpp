#include<iostream>
#include<string>
using namespace std;

//����ѧ���ṹ��
struct student
{
	string name; //���� 
	int age;	 //���� 
	int score;	 //���� 
};
//������ʦ�ṹ�� 
struct teacher
{
	int id;             //��ʦ��� 
	string name;        //��ʦ���� 
	int age;            //��ʦ���� 
	struct student stu; //������ѧ��  
};
int main() {
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;
	  
	cout << t.name << " " << t.id << " " << t.age << endl;
	cout << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;
	
	return 0;			
}
