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
	worker = new Employee(1, "����", 1);
	worker->showinfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showinfo();
	delete worker;

	worker = new Boss(3, "����", 3);
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
		cout << "����������ѡ��:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1: //���ְ��
			wm.Add_Emp();
			break; 
		case 2: //��ʾְ��
			wm.show_Emp();
			break;
		case 3: //ɾ��ְ��
			wm.del_Emp();
			break;
		case 4: //�޸�ְ��
			wm.mod_Emp();
			break;
		case 5: //����ְ��
			wm.find_Emp();
			break;
		case 6: //����ְ��
			wm.sort_Emp();
			break;
		case 7: //����ļ�
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