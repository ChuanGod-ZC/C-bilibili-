#include<iostream>
#include<string>
using namespace std;

//1.设计英雄结构体
struct Hero
{
	//姓名 
	string name;
	//年龄 
	int age;
	// 性别 
	string sex;
};

//冒泡排序，实现年龄升序排列
void bubbleSort(struct Hero heroArray[], int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-i-1; j++) {
			//如果j下标的元素年龄 大于 j+1 下标的元素的年龄，交换两个元素
			if (heroArray[j].age > heroArray[j+1].age) {
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j+1];
				heroArray[j+1] = temp;
			}
		}
	}
}

//打印排序后数组中的信息
void printHero(struct Hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "姓名： " << heroArray[i].name 
			 << " 年龄：" << heroArray[i].age
			 << " 性别：" << heroArray[i].sex
			 << endl;
	}
}
int main() {
	 
	//2.创建数组存放5名英雄 
	struct Hero heroArray[5] = 
	{
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"},
	};
	
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前结果打印输出： " << endl;
	for (int i = 0; i < len; i++) {
		cout << "姓名： " << heroArray[i].name 
			 << " 年龄：" << heroArray[i].age
			 << " 性别：" << heroArray[i].sex
			 << endl; 
	}

	//3.对数组进行排序，按照年龄进行升序排序 
	bubbleSort(heroArray, len);
	cout << "排序后结果打印输出: " << endl;
	
	//4.将排序后结果打印输出 
	printHero(heroArray, len);
	
	return 0;
}
