#include <iostream>
#include"Reporter_Class.h"

int main() {

	char inFile[50];
	char outFile[50];
	double HourSalary = 0.0;
	Reporter reporter;

	std::cout << "Enter .bin file name: ";
	std::cin >> inFile;
	//strcpy_s(inFile, "employee.bin");
	std::cout << "Enter .txt file name: ";
	std::cin >> outFile;
	//strcpy_s(outFile, "Report.txt");
	std::cout << "Enter hour salary: ";
	std::cin >> HourSalary;
	//HourSalary = 2.0;
	
	reporter.OpenBinFile(inFile);
	reporter.OpenTxtFile(outFile);

	reporter.SetHourSalary(HourSalary);

	reporter.WriteToTxt();
}