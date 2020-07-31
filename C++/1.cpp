#include<iostream>
#include<string>
using namespace std;

//自定义的数据类型:一些类型集合组成的一个类型
struct Student
{
    //成员列表
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
}s3;

int main() {
    // 1.struct Student s1;
    struct Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;

    cout << s1.name << " " << s1.age << " " << s1.score << endl;
    
	// 2.struct Student s2 = {};
    struct Student s2 = { "李四", 19, 80 }; //创建时 struct 可以省略 
    cout << s2.name << " " << s2.age << " " << s2.score << endl;

	//在定义结构体时顺便创建具体学生
	s3.name = "王五";
	s3. age = 20;
	s3.score = 60;
	cout << s3.name << " " << s3.age << " " << s3.score << endl;

	}
	
	//定义时 struct 不可省略
	//创建时可以省略  





