#pragma once

#include "Employee.h"
#include<ostream>
#include<fstream>
#include<iostream>

class Creator
{
	std::ofstream *file = nullptr;

public:

	Creator();

	~Creator();

	void OpenBin(char* fname);

	employee* CreateEmployee();

	void WriteToBin(employee *emp);
};

Creator::Creator() {

}

Creator::~Creator() {

	file->close();

	delete file;
};

void Creator::OpenBin(char *fname) {
	
	this->file = new std::ofstream;
	file->open(fname, std::ios::binary | std::ios::out | std::ios::app);
};

employee* Creator::CreateEmployee() {
	
	char name[10];
	int num;
	double hours;

	std::cout << "name: ";
	std::cin >> name;
	std::cout << "num: ";
	std::cin >> num;
	std::cout << "hours: ";
	std::cin >> hours;

	return new employee(num, name, hours);
	
};

void Creator::WriteToBin(employee *emp) {

	file->write((char*)emp, sizeof(employee));

}