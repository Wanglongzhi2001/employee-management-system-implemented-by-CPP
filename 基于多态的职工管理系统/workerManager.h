#pragma once
#include<iostream>
using namespace std;
#include "worker.h"
#include <fstream>
#define FILENAME "empFile.txt"

class workerManager
{
public:
	workerManager();

	~workerManager();

	void show_menu();

	void exitSystem();

	void Add_Emp();

	void save();

	int get_EmpNum();

	void init_Emp();

	void show_Emp();

	void del_Emp();

	void mod_Emp();

	void find_Emp();

	int isExist(int id);

	void sort_Emp();

	void clean_File();
	int m_EmpNum;
	//员工数组的指针
	Worker** m_EmpArray;
	bool m_FileIsEmpty;
};