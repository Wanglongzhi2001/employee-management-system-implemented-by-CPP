#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker
{
public:
	//显示个人信息
	virtual void showinfo()=0;
	//获取岗位名称
	virtual string getDeptName()=0;
	//
	int m_Id;
	string m_Name;
	int m_DeptId;
};