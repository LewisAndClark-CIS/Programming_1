// ProgChallenge2.cpp : Defines the entry point for the console application.
//Author: Thomas Morrissey
//Collerated with Luke Gosnellll, Tyler Gurrea, and Jose Chica.
//Date: 02-03-2015


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int EmployeeNumber = 0;
	double CurrentSalary = 0;

	cout << "Welcome to Mcdonald's salary projection application." << endl;
	cout << "This application projection prodects what your employee's new salary is for the next 6 months." << endl;
	cout << "Please press <Enter> to complay." << endl;
	getchar();
	cout << "Please enter your employee's number: ";
	cin >> EmployeeNumber;
	

	return 0;
}

