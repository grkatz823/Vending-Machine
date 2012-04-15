//....................................................

// Header file for dispenser class
#ifndef DISPENSER_H
#define	DISPENSER_H


class inventory;	// Forward Declarations
class money_handler;
class console;

#include<vector>
#include<iostream>
#include "candy.h"
#include "inventory.h"

class dispenser {
    public:
	dispenser(inventory &inventory_handle, money_handler &mh_handle, console &console_handle);
	void checkInventory();
	void checkMoney();
	void dispenseCandy(int choice);
	void request();

    private:

	console& console_ref;
	inventory& inventory_ref;
	money_handler& money_handler_ref;

};

#endif


