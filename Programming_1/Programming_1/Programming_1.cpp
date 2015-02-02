//Program: Programming_1.cpp
//Author: Luke Gosnell
//Date: 2/2/2015
// NOTE: Exit and Clear fuctions are unfinished.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "IKEA IS LIFE" << endl;
	cout << "555 Generic Street" << endl;
	cout << "555-555-5555" << endl;
	cout << "Program #1" << endl;
	cout << "Welcome to the Sale Assist Program!!" << endl;
	cout << "This program will help you figure a customer order." << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << " " << endl;
	cout << "ITEMS" << endl;
	cout << "1 - Refridgerator --- $499.99" << endl;
	cout << "2 - Microwave ------- $99.99" << endl;
	cout << "3 - Oven ------------ $599.99" << endl;
	cout << "4 - Couch ----------- $850.99" << endl;
	cout << "5 - Chair ----------- $29.99" << endl;

	int clear = 0;
	
	double refridgerator = 499.99;
	double microwave = 99.99;
	double oven = 599.99;
	double couch = 850.99;
	double chair = 29.99;

	while (clear == 0){
		int addedItems = 0;
		int itemNumber = 0;
		int itemAmount = 0;
		int months = 0;
		int choice = 0;

		cout << " " << endl;
		cout << "Type the item number to add it to the list: ";
		cin >> itemNumber;

		if (itemNumber == 1){
			cout << "How many? : ";
			cin >> itemAmount;
			cout << itemAmount << " refridgerators for $ " << (itemAmount * refridgerator) << "." << endl;
			cout << "Over how many months would you like to pay for these items? :";
			cin >> months;
			cout << "You have chosen to pay $" << (itemAmount * refridgerator / months) << " per month for " << months << " months " << "for " << itemAmount << " refridgerators." << endl;
			cout << " " << endl;
			cout << "Press '1' to clear the program or '2' to exit the program." << endl;
			cin >> choice;
			if (choice == 1){
				return 0;
			}
			else if (choice == 2){
				clear == 1;
			}

		}
		else if (itemNumber == 2){
			cout << "How many? : ";
			cin >> itemAmount;
			cout << itemAmount << " microwaves for $ " << (itemAmount * microwave) << "." << endl;
			cout << "Over how many months would you like to pay for these items? :";
			cin >> months;
			cout << "You have chosen to pay $" << (itemAmount * microwave / months) << " per month for " << months << " months " << "for " << itemAmount << " microwaves." << endl;
			cout << " " << endl;
			cout << "Press '1' to clear the program or '2' to exit the program." << endl;
			cin >> choice;
			if (choice == 1){
				return 0;
			}
			else if (choice == 2){
				clear == 1;
			}

		}
		else if (itemNumber == 3){
			cout << "How many? : ";
			cin >> itemAmount;
			cout << itemAmount << " ovens for $ " << (itemAmount * oven) << "." << endl;
			cout << "Over how many months would you like to pay for these items? :";
			cin >> months;
			cout << "You have chosen to pay $" << (itemAmount * oven / months) << " per month for " << months << " months " << "for " << itemAmount << " ovens." << endl;
			cout << " " << endl;
			cout << "Press '1' to clear the program or '2' to exit the program." << endl;
			cin >> choice;
			if (choice == 1){
				return 0;
			}
			else if (choice == 2){
				clear == 1;
			}

		}
		if (itemNumber == 4){
			cout << "How many? : ";
			cin >> itemAmount;
			cout << itemAmount << " couches for $ " << (itemAmount * couch) << "." << endl;
			cout << "Over how many months would you like to pay for these items? :";
			cin >> months;
			cout << "You have chosen to pay $" << (itemAmount * couch / months) << " per month for " << months << " months " << "for " << itemAmount << " couches." << endl;
			cout << " " << endl;
			cout << "Press '1' to clear the program or '2' to exit the program." << endl;
			cin >> choice;
			if (choice == 1){
				return 0;
			}
			else if (choice == 2){
				clear == 1;
			}

		}
		if (itemNumber == 5){
			cout << "How many? : ";
			cin >> itemAmount;
			cout << itemAmount << " chairs for $ " << (itemAmount * chair) << "." << endl;
			cout << "Over how many months would you like to pay for these items? :";
			cin >> months;
			cout << "You have chosen to pay $" << (itemAmount * chair / months) << " per month for " << months << " months " << "for " << itemAmount << " chairs." << endl;
			cout << " " << endl;
			cout << "Press '1' to clear the program or '2' to exit the program." << endl;
			cin >> choice;
			if (choice == 1){
				return 0;
			}
			else if (choice == 2){
				clear == 1;
			}

		}
	}

	getchar();
	getchar();
	return 0;
}

