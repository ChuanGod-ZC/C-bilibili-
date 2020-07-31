#include<iostream>
#include<string>
using namespace std;

//定义学生结构体
struct student
{
	string name; //姓名 
	int age;	 //年龄 
	int score;	 //分数 
};
//定义老师结构体 
struct teacher
{
	int id;             //教师编号 
	string name;        //教师姓名 
	int age;            //教师年龄 
	struct student stu; //辅导的学生  
};
int main() {
	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;
	  
	cout << t.name << " " << t.id << " " << t.age << endl;
	cout << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;
	
	return 0;			
}
