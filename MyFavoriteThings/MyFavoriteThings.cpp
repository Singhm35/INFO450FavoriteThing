// Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ShoeItem.h"
#include "shoeList.h"
using namespace std;

void displayInstructions();

int main()
{
	char answer;
	displayInstructions();
	shoeList myList;
	//do this so the user can add it again
	//make it into a loop 
	do {
		myList.addShoeItem();
		cout << "Do you want to track this again? ";
		cin >> answer;
		cout << endl;
		cin.clear();
		cin.ignore();
	} while (answer == 'y' || answer == 'Y');
	cout << endl;
	myList.displayList();
	return 0;
}
//what the user will first see when it starts 
void displayInstructions()
{cout << "Welcome to the shoe tracker!" << endl;
cout << endl;
cout << "This tracks all of your answers to the shoe questions! :) ";
cout << "Have Fun!" << endl;
	