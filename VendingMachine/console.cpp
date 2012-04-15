//........................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Console class

#include<iostream>
	
#include "console.h"

#include "inventory.h"
#include "money_handler.h"

using namespace std;

console::console( inventory &inventory_handle, money_handler &money_handler_handle) 
    :	inventory_ref(inventory_handle),
	money_handler_ref(money_handler_handle)
{
}

void console::updateDisplay(){
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"	Candy	Price	Number Available"<<endl;
	inventory_ref.printCandyVector();
}


