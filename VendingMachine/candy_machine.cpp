//....................................................

//candy machine sim
//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
//Candy Machine Class

	//code
#include<string>
#include<iostream>
#include "candy_machine.h"


using namespace std;

candy_machine::candy_machine() 
   :	AdminTools(Console),
	Console(Inventory,MoneyHandler),
	Dispenser(Inventory, MoneyHandler,Console),
	Inventory(Console,Dispenser,AdminTools),
	MoneyHandler(),
	Candy()
{

	cout<< "Welcome to the Candy Machine!!!" <<endl;
	Inventory.addCandyType("Reeses",.75,0);
	Inventory.addCandyType("Snickers",1.25,15);
	Inventory.addCandyType("Hersheys",1.00,10);
	Inventory.addCandyType("Skittles",.75,18);
	Inventory.addCandyType("Starburst",1.75,25);
	bool isTrue = true;
	bool isTrue2 = true;
	bool isTrue3= true;
	bool paymentMade = true;
	bool isAvailable = true;

while(isTrue){
	Console.updateDisplay();

	cout<<"Please choose a candy (Enter it's number, for admintools enter 0)"<<endl;
	cin>>choice;
if(choice == 0)
{
	while(isTrue3){
		AdminTools.showOptions();
		cin>>adminChoice;



		if (adminChoice == 1){
		Console.updateDisplay();
		cout<<"Please input number of candy you would like deleted"<<endl;
		cin>>candyNum;
		Inventory.removeCandyType(candyNum);
		Console.updateDisplay();		
			}



		else if(adminChoice==2){
		cout<<"Please input candy name you would like to add (No Spaces):"<<endl;
		cin>>candyChoice;
		cout<<"Please input the price of the candy item (as a double, $XX.XX):"<<endl;
		cin>>price;
		cout<<"Please input the number of candy you would like to put in:"<<endl;
		cin>>numAvailable;
		Inventory.addCandyType(candyChoice,price,numAvailable);
		Console.updateDisplay();
			}



		else if(adminChoice==3){
		Console.updateDisplay();		
			}



		else if(adminChoice==4){
		Console.updateDisplay();
		cout<<"Please input number of candy whose price you would like to change"<<endl;
		cin>>candyNum;
		cout<<"Please input the new price of the candy item (as a double, $XX.XX):"<<endl;
		cin>>price;
		Inventory.setPrice(candyNum,price);
		Console.updateDisplay();
			}



		else if(adminChoice==5){
		Console.updateDisplay();
		cout<<"Please input number of candy whose amount you would like to change"<<endl;
		cin>>candyNum;
		cout<<"Please input the new amount of the candy item:"<<endl;
		cin>>numAvailable;
		Inventory.setAvailable(candyNum,numAvailable);
		Console.updateDisplay();
		}


		else if(adminChoice==6){
		cout<< "Your profits are $"<< MoneyHandler.showTotal() <<endl;
		}
		cout<<"Would you like to continue using administrative tools? (y/n)"<<endl;
		cin>>contin;
		if(contin=="y"){}
		else if(contin=="n"){
		isTrue3=false;
			}
		else{
		cout<<"Bad Input"<<endl;
			}
		 }
}


else{
	while(isTrue2){
	cout<<"Please enter money amount between 0 and 5 dollars (XX.XX)"<<endl;
	cin>>money;
	MoneyHandler.setCashIn(money);
	cout<<"You have $" << MoneyHandler.getCashIn() << endl;
 	cout<<"Would you like to put more money in? (y/n)"<<endl;
	cin>>contin;
	if(contin=="y"){
		}
	else if(contin=="n"){
	isTrue2=false;
		}
	else{
	cout<<"Bad Input"<<endl;
		}
     	}
	price = Inventory.getPrice(choice);
	money = MoneyHandler.getCashIn();
	paymentMade = MoneyHandler.checkPayment(price,money);
	isAvailable = Inventory.getAvailable(choice);
	


	if(paymentMade && isAvailable){
	Inventory.dispenseCandy(choice);
	price = Inventory.getPrice(choice);
	money = MoneyHandler.getCashIn();
	cout<<"Your change is: "<< MoneyHandler.calcChange(price,money)<<endl;
	MoneyHandler.updateTotal(price);
	MoneyHandler.resetCashIn();
	Dispenser.request();
	}
	else if(paymentMade){
	cout<<"No candy of that type available, sorry! Please try again"<<endl;
	}
	else{
	cout<<"Insufficient payments made, please try again."<<endl;
	}
}	
	cout<<"Would you like to start over? (y/n)"<<endl;
	cin>>contin;
	if(contin=="y"){
	isTrue2=true;
	isTrue3=true;
	paymentMade = true;
	isAvailable = true;
	}
	else if(contin=="n"){
	isTrue=false;
	}
	else{
	cout<<"Bad Input"<<endl;
	}
	
   }
	cout<<"Have a nice day!!!"<<endl;
}
