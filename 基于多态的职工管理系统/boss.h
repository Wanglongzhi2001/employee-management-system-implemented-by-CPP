#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class Boss : public Worker
{
public:

	Boss(int id, string name, int dId);

	//显示个人信息
	virtual void showinfo();

	//获取职工岗位名称
	virtual string getDeptName();
};