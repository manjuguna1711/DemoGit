// FunctionWithoutArgWithoutReturbEx.cpp : This file contains the 'main' function. Program execution begins and ends there.
// student record generator  

#include <iostream>
#include <string>
using namespace std;


void line(); // function prototype  

int main()
{
	//declaration section 

	int Rollno[5] = { 1001,1002,1003,1004,1005 };
	
	string name[5] = { "Manju","Anitha","Kala","Kavin","Jack" };
	string course[5] = { "MCA","BSC","BCS","BSE","BE" };
	string grade[5] = { "Passed with A+ ","Pass with A+","Passed with B-","Fail ","Passed with C+" };

	line(); //function call
	cout << "\n Yoobee Student Record \n";
	line(); //function call 


	for (int i = 0; i < 5; i++)
	{
		cout << " Name\t\t : " << name[i] << "\n";
		cout << " Rollno\t\t : " << Rollno[i] << "\n";
		cout << " Course\t\t : " << course[i] << "\n";
		cout << " Grade\t\t : " << grade[i] << "\n";
		line();
	 }

	cout << "\n\n";
   
}

// line generation , function without arguments and without return value 
void line()
{
	cout << "\n";
	for (int i = 0; i < 30; i++)
	{
		cout << "*";
	}
	cout << "\n";
}

