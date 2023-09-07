#pragma once

#include<string.h>

struct employee {
	int num;
	char name[10];
	double hours;

	public:

	employee(int num, char name[10], double hours);

	~employee();
};

employee::employee(int num, char name[10], double hours) {
	this->num = num;
	strcpy_s(this->name, name);
	this->hours = hours;
};

employee::~employee() {
	delete[] name;
};
