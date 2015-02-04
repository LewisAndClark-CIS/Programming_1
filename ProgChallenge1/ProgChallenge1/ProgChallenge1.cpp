// ProgChallenge1.cpp : Defines the entry point for the console application.
//Author: Thomas Morrissey
//Collerated with Luke Gosnellll, Tyler Gurrea, and Jose Chica.
//Date: 02-02-2015


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int ChosenItem();
int ItemNumber(int ChoosenItem);
int PaymentPlan(int Item, int ItemNumber);

int ChosenItem(){
	int Choice = 0;
	cout << "To begin this process, please beign by enter what item it is." << endl;
	cout << "From the items below please enter the item's product number." << endl;
	cout << "1 - StarShip - $50,000\n"
		"2 - Batman's Cowl - $30,000\n"
		"3 - Lightsaber - $45,000\n"
		"4 - The Master Sword - 27,500\n"
		"5 - Deadpool's Katanas - 22500\n";
	cout << "Which of these item's are you taking out? " << endl;
	cin >> Choice;
	return Choice;
}

int ItemNumber(int ChoosenItem){
	string YourChoice = "";
	int ItemCost = 0;
	int TotalPrice = 0;
	int NumberOfItems = 0;
	if (ChoosenItem == 1){
		YourChoice = "Starship";
		ItemCost = 50000;
	}
	else if (ChoosenItem == 2) {
		YourChoice = "Batman's Cowl";
		ItemCost = 30000;
	}
	else if (ChoosenItem == 3){
		YourChoice = "Lightsaber";
		ItemCost = 45000;
	}
	else if (ChoosenItem == 4){
		YourChoice = "The Master Sword";
		ItemCost = 27500;
	}
	else if (ChoosenItem == 5){
		YourChoice = "Deadpool Katanas";
		ItemCost = 22500;
	}
	else{
		cout << "I am sorry but that is a option." << endl;
		cout << ""
			""
			"" << endl;
	}
	cout << "With " << YourChoice << "selected how many of these items would you like to purchase? ";
	cin >> NumberOfItems;
	TotalPrice = ItemCost * NumberOfItems;
	cout << "Alright, your total is " << TotalPrice << endl;
	return TotalPrice;
}

int PaymentPlan(int Item, int TotalNumber){
	string YourChoice = 0;
	int NumberOfMonths = 0;
	int Payment = 0;
	if (Item == 1){
		YourChoice = "Starship";
	}
	else if (Item == 2) {
		YourChoice = "Batman's Cowl";
	}
	else if (Item == 3){
		YourChoice = "Lightsaber";
	}
	else if (Item == 4){
		YourChoice = "The Master Sword";
	}
	else if (Item == 5){
		YourChoice = "Deadpool Katanas";
	}
	cout << "From having " << YourChoice << ", how many months do you have to pay for this product? ";
	cin >> NumberOfMonths;
	Payment = TotalNumber * NumberOfMonths;
	cout << "Here is how much you need to pay per monthy -> " << Payment << endl;
	return Payment;
}
int main()
{
	int ItemSelecetion = 0;
	int NumberOfItems = 0;
	int payment = 0;
	int Choice = 9;
	string SalesManest[5] = {"","","","",""};
	while (Choice != 0){
		cout << "Welcome to Furniture Sales!" << endl;
		cout << "From your friend at 'Sam's Club" << endl;
		cout << "This application calcutate orders you may or may not have." << endl;
		cout << "If you wish to calculate for a new entry please press 1." << endl;
		cout << "If you wish to clear the current data, please press 2." << endl;
		cout << "If you wish to exit please press 0." << endl;
		cout << "If you press any other number, you will get a error screen." << endl;
		cout << "Please press enter to continue." << endl;
		getchar();
		cout << "Here is your current Sales manifest." << endl;
		for (int i = 0; i > 5; i++){
			cout << SalesManest[i];
		}
		cout << "What is your selection? " << endl;
		cin >> Choice;
		if (Choice == 1){
			int ItemSelection = ChosenItem();
			int NumberOfItems=ItemNumber(ItemSelection);
			int payment = PaymentPlan(ItemSelection,NumberOfItems);
		}
		if (Choice == 2){

		}
		
	}
	return 0;
}

