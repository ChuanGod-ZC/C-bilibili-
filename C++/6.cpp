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

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ������� 
void printStudents(const student *s) {
//	s->age = 150; //read-only object
	cout << s->name << " "  << s->age << " " << s->score << endl;
}
int main() {
	
	//�����ṹ�����
	struct student s = { "����", 15, 70 };
	
	//ͨ��������ӡ�ṹ�������Ϣ
	printStudents(&s);
	
	cout << "main����������Ϊ" << s.age << endl; 
}
