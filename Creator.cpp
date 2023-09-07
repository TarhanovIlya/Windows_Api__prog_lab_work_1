#include"Creator_Class.h"
#include<iostream>

int main() {

	char fileName[20];
	int employeesNum = 0;
	Creator creator;
	int counter;

	std::cout << "write .bin file name: ";
	std::cin >> fileName;
	
	std::cout << "write number of employees: ";
	std::cin >> employeesNum;

	creator.OpenBin(fileName);

	for (counter = 0; counter < employeesNum; counter++) {
		creator.WriteToBin(creator.CreateEmployee());
	}
	

}