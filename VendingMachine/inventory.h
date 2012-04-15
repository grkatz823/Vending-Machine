
//........................................................

// Inventory header file
#ifndef INVENTORY_H
#define	INVENTORY_H
#include<iostream>
#include<vector>
#include<string>
#include "candy.h"
class console;		// Forward Declarations
class dispenser;
class admin_tools;

class inventory {
	
    public:
	inventory(console &console_handle, dispenser &dispenser_handle,admin_tools &admin_tools_handle);
	void dispenseCandy(int choice);
	void printCandyVector();
	void removeCandyType(int candyName);
	void addCandyType(string candyName,double candyPrice,int candyAvailable);
	double getPrice(int choice);
	void setPrice(int choice,double price);
	void setAvailable(int choice,int numAvailable);
	bool getAvailable(int choice);
    
    private:
	int choice;
	bool isNum;
	console& console_ref;
	dispenser& dispenser_ref;
	admin_tools& admin_tools_ref;
	vector<candy> CandyVector;


};

#endif


