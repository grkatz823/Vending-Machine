//.................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Admin Tools class

#include<iostream>

#include "admin_tools.h"
#include "console.h"

using namespace std;

admin_tools::admin_tools(console &console_handle) 
	: console_ref(console_handle){}

void admin_tools::showOptions(){

cout<<endl;
cout<<endl;
cout<<endl;
cout<<"1) Remove Candy Type"<<endl;
cout<<"2) Add Candy Type"<<endl;
cout<<"3) Check Inventory"<<endl;
cout<<"4) Change Price"<<endl;
cout<<"5) Change Inventory"<<endl;
cout<<"6) Check Total Profits"<<endl;
cout<<"Choose the number of what you would like to do"<<endl;
} 


//..............................................................................
