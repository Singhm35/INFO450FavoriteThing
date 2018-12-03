#include "stdafx.h"
#include "ShoeItem.h"

//Default ShoeItem Constructor
ShoeItem::ShoeItem()
{
	shoeTitle = "";
	shoeType = "";
	shoemaker = "";
	favoritebrand = "";
	shoePersonalRating = 0;
}
//returns shoe title for duplicate check
string ShoeItem::getshoeTitle()
{
	return shoeTitle;
}
//used to get info from user
int ShoeItem::getShoeItem()
{
	cout << "What is your dream shoe name?: ";
	getline(cin, shoeTitle);
	cout << "What type of shoe is your favorite (ex. heels, mules, loafers, heels, tennis shoes..) ";
	getline(cin, shoeType);
	cout << "What is your favorite brand of shoes: ";
	getline(cin, shoemaker);
	cout << "Who is your favorite character in the shoe?: ";
	getline(cin, favoritebrand);
	cout << "What is the shoe rating 1-5?: ";
	cin >> shoePersonalRating;
	if (!cin.good())
	{
		cout << "Failure to read shoe rating." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		return ERROR1;
	}
	//checks if shoe rating is within range
	else if (shoePersonalRating > 5 || shoePersonalRating < 1)
	{
		cout << "ERROR!! shoe rating should be an integer between 1-5!!" << endl;
		cin.clear();
		cin.ignore();
		return ERROR1;
	}
	cin.clear();
	cin.ignore();
	return 0;
}

//overloaded friend function to display favorite shoes to console
ostream & operator<<(ostream &os, const ShoeItem &item)
{
	os << "shoe " << endl;
	os << "shoe Title: " << item.shoeTitle << endl;
	os << "shoe Type: " << item.shoeType << endl;
	os << "shoe maker: " << item.shoemaker << endl;
	os << "Favorite brand: " << item.favoritebrand << endl;
	os << "shoe Rating: " << item.shoePersonalRating << endl;
	return os;

}