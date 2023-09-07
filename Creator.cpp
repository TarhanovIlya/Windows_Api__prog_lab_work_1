#include"Creator_Class.h"
#include<iostream>

int main() {

	char fileName[20];
	int employeesNum = 0;
	Creator creator;
	int counter;

	std::cout << "write .bin file name: ";
	std::cin >> fileName;
	//strcpy_s(fileName, "employee.bin");

	std::cout << "write number of employees: ";
	std::cin >> employeesNum;
	//employeesNum = 2;

	creator.SetEmployeeNum(employeesNum);

	creator.OpenBin(fileName);

	creator.WriteToBin();
	
	

}