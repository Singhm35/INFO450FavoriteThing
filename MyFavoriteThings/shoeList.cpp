#include "stdafx.h"
#include "shoeList.h"
#include <iostream>
using namespace std;

//constructor for shoeList
shoeList::shoeList()
{
	listSize = 0;
}

//bool detects duplicate shoe titles
bool shoeList::duplicateDetection(ShoeItem shoe)
{
	int i = 0;
	for (i = 0; i < listSize; i++)
	{
		if (shoe.getshoeTitle() == gList[i].getshoeTitle())
		{
			cout << "Duplicate detetected, wont add to list.";
			cout << endl;
			return false;
		}
	}
	return true;
}

//adds ShoeItem to the list for later display
int shoeList::addShoeItem()
{
	ShoeItem addshoe;
	addshoe.getShoeItem();
	if (duplicateDetection(addshoe))
	{
		gList[listSize] = addshoe;
		listSize++;
		return 0;
	}
	else
	{
		cout << "Error occured in addShoeItem" << endl;
		return ERROR1;
	}
}

//displays list to user
void shoeList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << gList[i];
		cout << endl << endl;
	}
}