//....................................................
	
//Candy Machine Header File
#ifndef CANDY_MACHINE_H
#define	CANDY_MACHINE_H



#include<string>

#include "admin_tools.h"
#include "console.h"
#include "dispenser.h"
#include "inventory.h"
#include "money_handler.h"
#include "candy.h"

using namespace std;

class candy_machine {

    public:
	candy_machine();
	
    private:
	bool isTrue;
	bool isTrue2;
	bool isTrue3;
	bool paymentMade;
	bool isAvailable;
	double money;
	int choice;
	int adminChoice;
	string candyChoice;
	int candyNum;
	double price;
	int numAvailable;
	string contin;
	admin_tools AdminTools;
	console	Console;
	dispenser Dispenser;
	inventory Inventory;
	money_handler MoneyHandler;
	candy Candy;



};


#endif //CANDY_MACHINE_H
