#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"

void test()
{
	Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showinfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->showinfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->showinfo();
	delete worker;
}
int main()
{
	//test();
	int choice = 0;
	workerManager wm;
	while (true)
	{
		wm.show_menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //退出系统
			wm.exitSystem();
			break;
		case 1: //添加职工
			wm.Add_Emp();
			break; 
		case 2: //显示职工
			wm.show_Emp();
			break;
		case 3: //删除职工
			wm.del_Emp();
			break;
		case 4: //修改职工
			wm.mod_Emp();
			break;
		case 5: //查找职工
			wm.find_Emp();
			break;
		case 6: //排序职工
			wm.sort_Emp();
			break;
		case 7: //清空文件
			wm.clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}