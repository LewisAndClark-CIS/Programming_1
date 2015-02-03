// programming_1.cpp
// Jason Nguyen
// 2/3/15

#include "stdafx.h"
#include <iostream>
#include <string> 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string items[5] = { "Stove", "Refrigerator", "Dishwasher", "Chair", "Sofa" };
	int item_prices[5] = { 500, 500, 350, 70, 160 };
	int furniture = 0;
	int number_ordered = 0;
	int months = 0;
	int total = 0;
	double monthly_payment = 0;
	int choice = 0;

	while (choice != 1 &&  choice != 3){
		system("CLS");
		cout << "Contestant 1, program #1, Furniture Sales Program" << endl << endl;
		cout << "Pick one of the products, enter a number 1-5 to select the item." << endl << endl;
		cout << "      1 - Stove -------- $500" << endl;
		cout << "      2 - Refrigerator-- $500" << endl;
		cout << "      3 - Dishwasher---- $350" << endl;
		cout << "      4 - Chair--------- $70" << endl;
		cout << "      5 - Sofa---------- $160" << endl;
		cout << "Your choice: ";
		cin >> furniture;
		cout << "Number ordered: ";
		cin >> number_ordered;
		cout << "Months to pay: ";
		cin >> months;

		cout << endl << endl << "Please enter your choice(1-3): " << endl;
		cout << "      1 - Calculate" << endl;
		cout << "      2 - Clear (allows for another entry)" << endl;
		cout << "      3 - Exit" << endl;
		cout << "Your choice: ";
		cin >> choice;
	}
	if (choice == 1){
		system("CLS");

		total = item_prices[furniture - 1] * number_ordered;
		monthly_payment = double(total) / double(months);
		cout << "Contestant 1, program #1, Furniture Sales Program" << endl << endl;
		cout << "              ITEMS" << endl;
		cout << "      1 - Stove -------- $500" << endl;
		cout << "      2 - Refrigerator-- $500" << endl;
		cout << "      3 - Dishwasher---- $350" << endl;
		cout << "      4 - Chair--------- $70" << endl;
		cout << "      5 - Sofa---------- $160" << endl << endl;

		cout << "Product selected: " << items[furniture - 1] << endl; 
		cout << "Amount ordered: " << number_ordered << endl;
		cout << "Months to pay: " << months << endl;
		cout << "Monthly payment: $" << monthly_payment << endl;
		cout << "Total amount of items: " << number_ordered;
		cin.ignore();
		cin.ignore();
	}

	system("CLS");
	cout << "Contestant 1, program #1, Furniture Sales Program" << endl << endl;
	cout << "Thank you for using Jason's Furniture sales program.";
	cin.ignore();
	cin.ignore();

	return 0;
}
