#pragma once
#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int ERROR1 = 101;

//ShoeItem class 
class ShoeItem
{
private:
	string shoeTitle;
	string shoeType;
	string shoemaker;
	string favoritebrand;
	int shoePersonalRating;

public:
	ShoeItem();
	// string function will return shoe title for duplicate check
	string getshoeTitle();
	int getShoeItem();
	//friend function used to display shoes to console
	friend ostream & operator<<(ostream &os, const ShoeItem &item);

};