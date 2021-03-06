//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Money Handler class

#include<iostream>

#include "money_handler.h"

#include "console.h"
#include "dispenser.h"

using namespace std;


money_handler::money_handler(console &console_handle, dispenser &dispenser_handle, inventory &inventory_handle){ 
    	console_ref(console_handle),
	dispenser_ref(dispenser_handle)
	inventory_ref(inventory_handle)	
	{

}

double MoneyHandler::calcChange(double price, double cashIn){
	change = cashIn - price;
}

void MoneyHandler::getPrice(){
	  	for ( int i = 0 ; i < ( CandyVector.size() - 1)
	{
		if(candyName.equals(CandyVector.at(i)))
		{
			CandyVector.erase(CandyVector.begin()+i));
		}
	}
}

double MoneyHandler::setCashIn(double newCashIn){
	cashIn += newCashIn
}

/*int MoneyHandler::updateTotal(){
return total = 
}*/


//................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Inventory Class

#include<iostream>

#include "inventory.h"

#include "console.h"
#include "dispenser.h"

using namespace std;

inventory::inventory(console &console_handle, dispenser &dispenser_handle) 
    :	console_ref(console_handle),
	dispenser_ref(dispenser_handle)
{}

/*bool Inventory::getAvailable(string candyName){
		for ( int i = 0 ; i < ( CandyVector.size() - 1)
	{
		if(candyName.equals(CandyVector.at(i)))
		{
			CandyVector.erase(CandyVector.begin()+i));
		}
	}
	}*/

void Inventory::addCandyType(string candyName,int candyPrice, int candyAvailable){
	Candy candy
	candy.setName(candyName);
	candy.setPrice(candyPrice);
	CandyVector.push_back(candyAvailable);
}

void Inventory::removeCandyType(string candyName)
{
	for ( int i = 0 ; i < ( CandyVector.size() - 1)
	{
		if(candyName.equals(CandyVector.at(i)))
		{
			CandyVector.erase(CandyVector.begin()+i));
		}
	}

//void Inventory::setAvailable(){}


//..........................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Dispenser Class

#include<iostream>

#include "dispenser.h"

#include "inventory.h"
#include "money_handler.h"


using namespace std;

dispenser::dispenser(inventory &inventory_handle, money_handler &mh_handle) 
    :   inventory_ref(inventory_handle),
	mh_ref(mh_handle)	
{}

void Dispenser::checkInventory(){}

void Dispenser::checkMoney(){}

void Dispenser::dispense(){}  

void Dispenser::request(){}


//........................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Console class

#include<iostream>
	
#include "console.h"

#include "admin_tools.h"
#include "dispenser.h"
#include "inventory.h"
#include "money_handler.h"

using namespace std;

console::console(admin_tools &at_handle, dispenser &dispenser_handle, 
		 inventory &inventory_handle, money_handler &mh_handle) 
    {	at_ref(at_handle),
	dispenser_ref(dispenser_handle),
	inventory_ref(inventory_handle),
	mh_ref(mh_handle)
}
/*void Console::MoneyDisplay(){}

void Console::candyDisplay(){}

Console::buttons(){}

Console::moneyInfo(){}

Console::sendCandyCode(){}*/

Console::updateDisplay(){
	cout<<"Please choose a candy from the following options (Enter it's number, administrators can admin"<<endl
	cout<<"Candy			Price" << endl
	inventory.printVector();
	cin >> choice
}


//....................................................

//candy machine sim
//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
//Candy Machine Class

	//code
#include<iostream>

#include "candy_machine.h"

using namespace std;

candy_machine::candy_machine() 
    :	my_tools(my_inventory, my_handler),
	my_console(my_tools, my_dispenser, my_inventory,my_handler),
	my_dispenser(my_inventory, my_handler),
	my_inventory(my_console, my_dispenser),
	my_handler(my_console, my_dispenser)
{
	cout<< "Welcome to the Candy Machine" <<endl;
	inventory.addCandyType("Reese's",75,20);
	cout<< "Please make your selection" << endl;
}

string CandyMachine::getString(){
	
}
//.................................................

#include <iostream>
#include "candy.h"
#include<string>
using namespace std;

 
Candy::Candy(Inventory &inventory)
	: Inventory_ref (inventory )
{}

string candy::getName(){
return name;
}

double candy::getPrice(){
return price;
}

int candy::getAvailable(){
return available;
}

void candy::setName(setName){
name = setName;
}

void candy::setPrice(setPrice){
price = setPrice;
}

void candy::setAvailable(setAvailable){
available = setAvailable;
}

//.................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Admin Tools class

#include<iostream>

#include "admin_tools.h"
#include "inventory.h"
#include "money_handler.h"

using namespace std;

admin_tools::admin_tools(inventory &inventory_handle, money_handler &mh_handle) 
	: test("You have reached the admin_tools class"),
	  inventory_ref(inventory_handle),
	  mh_ref(mh_handle)

/*void AdminTools::takeMoneyOut(){

}

void AdminTools::putMoneyIn(){}

void AdminTools::checkInventory(){}

void AdminTools::addToInventory(){}

void AdminTools::addCandyType(){}

void AdminTools::removeCandyType(){}

void AdminTools::changePrice(){}
*/

//..............................................................................
