// Money Handler class
#ifndef MONEY_HANDLER_H
#define	MONEY_HANDLER_H
#include<iostream>


using namespace std;
class money_handler{
  public:
       money_handler(); 
	double calcChange(double price,double cashIn);
	//void getPrice();
	double setCashIn(double newCashIn);
	double resetCashIn();
	double getCashIn();
	double showTotal();
	bool checkPayment(double price,double money);
	double updateTotal(double price);

   private:
	double price;
	double total;
	double cashIn;
	double change;
};

#endif 
