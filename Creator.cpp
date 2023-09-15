#include"Creator_Class.h"
#include<iostream>

int main(int argc, char* argv[]) {

	char fileName[20];
	int employeesNum = 0;
	char tempInt[10];
	Creator creator;
	
	strcpy_s(fileName, argv[0]);

	strcpy_s(tempInt, argv[1]);
	employeesNum = atoi(tempInt);

	
	creator.SetEmployeeNum(employeesNum);

	creator.OpenBin(fileName);

	creator.WriteToBin();
	
	

}