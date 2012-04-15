//................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Inventory Class

#include<iostream>

#include "inventory.h"
#include "admin_tools.h"
#include "console.h"
#include "dispenser.h"

using namespace std;

inventory::inventory(console &console_handle, dispenser &dispenser_handle, admin_tools &admin_tools_handle) 
    :	console_ref(console_handle),
	dispenser_ref(dispenser_handle),
	admin_tools_ref(admin_tools_handle)
{}

double inventory::getPrice(int choice){
		for ( int i = 0 ; i < (CandyVector.size() + 1);i++)
		if (i==choice){
		{
			return CandyVector.at(i-1).getPrice();
		}
	}
}

void inventory::setPrice(int choice,double price){
		for ( int i = 0 ; i < (CandyVector.size() + 1);i++)
		if (i==choice){
		{
			 CandyVector.at(i-1).setPrice(price);
		}
	}
}


void inventory::setAvailable(int choice,int numAvailable){
		for ( int i = 0 ; i < (CandyVector.size() + 1);i++)
		if (i==choice){
		{
			 CandyVector.at(i-1).setAvailable(numAvailable);
		}
	}
}

bool inventory::getAvailable(int choice){
		for ( int i = 0 ; i < (CandyVector.size() + 1);i++)
		if (i==choice){
		{
			return CandyVector.at(i-1).getAvailable() != 0;
		}
	}
}

void inventory::addCandyType(string candyName,double candyPrice, int candyAvailable){
	candy Candy;
	Candy.setName(candyName);
	Candy.setPrice(candyPrice);
	Candy.setAvailable(candyAvailable);
	CandyVector.push_back(Candy);
}


void inventory::printCandyVector()
{
	for ( int i = 1; i <CandyVector.size()+1;i++){
	cout<<i<<")"<<CandyVector.at(i-1).getName()<<"	$"<<CandyVector.at(i-1).getPrice()<<"	Quantity: "<<CandyVector.at(i-1).getAvailable()<<endl;
	}
}

void inventory::dispenseCandy(int choice)
{
	bool isNum= false;
	for (int i =1; i<CandyVector.size()+1;i++){
		if(i == choice)
		{
		cout<<"You've selected: "<<CandyVector.at(i-1).getName()<<endl;
		CandyVector.at(i-1).setAvailable(CandyVector.at(i-1).getAvailable()-1);
		isNum = true;
		}
	}
	

	if(isNum==false){
	cout<<"Bad Selection"<<endl;}
} 


void inventory::removeCandyType(int candyName)
{
	for ( int i = 1; i < ( CandyVector.size() + 1);i++)
	{
		if(i==candyName)
		{
			CandyVector.erase(CandyVector.begin());
		}
	}
}

//void Inventory::setAvailable(){}

