//..............................................

// Header file for console class
#ifndef CONSOLE_H
#define	CONSOLE_H

#include<iostream>
#include<string>

using namespace std;

class money_handler;
class inventory;

class console {

    public:
	console( inventory &inventory_handle, money_handler &money_handler_handle);
	void updateDisplay();
	


	private:
	inventory& inventory_ref;
	money_handler& money_handler_ref;
	void sendCandyCode();
	

};

#endif 


