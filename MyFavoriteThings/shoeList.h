#pragma once
#include "stdafx.h"
#include "ShoeItem.h"
#include <string>

//shoeList class with array
class shoeList
{
private:
	ShoeItem gList[100];
	int listSize;
public:
	shoeList();
	//function adds shoe to list if not duplicate
	int addShoeItem();
	// function used to detect duplicate
	bool duplicateDetection(ShoeItem shoe);
	// function display list
	void displayList();
};
