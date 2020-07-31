#include<iostream>
#include<string>
using namespace std;

// 定义学生结构体
struct student
{
	//姓名 
	string name;
	//年龄 
	int age;
	//分数 
	int score;	
}; 

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来 
void printStudents(const student *s) {
//	s->age = 150; //read-only object
	cout << s->name << " "  << s->age << " " << s->score << endl;
}
int main() {
	
	//创建结构体变量
	struct student s = { "张三", 15, 70 };
	
	//通过函数打印结构体变量信息
	printStudents(&s);
	
	cout << "main中张三年龄为" << s.age << endl; 
}
