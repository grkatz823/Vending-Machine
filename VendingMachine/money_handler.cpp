//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Money Handler class

#include<iostream>

#include "money_handler.h"



using namespace std;


money_handler::money_handler(){}

double money_handler::calcChange(double price, double cashIn){
	change = cashIn - price;
	cashIn = 0;
	return change;
}

bool money_handler::checkPayment(double price,double money){
	return money>=price;
}


double money_handler::getCashIn(){
	return cashIn;
}

double money_handler::resetCashIn(){
	return cashIn = 0;
}
/*void money_handler::getPrice(){
	  	for ( int i = 0 ; i < ( CandyVector.size() - 1)
	{
		if(candyName.equals(CandyVector.at(i)))
		{
			CandyVector.erase(CandyVector.begin()+i));
		}
	}
}*/

double money_handler::setCashIn(double newCashIn){
	if(newCashIn>=00.00 && newCashIn<=05.00){
	cashIn += newCashIn;
	}else{
		cout<<"this amount not accepted"<<endl;
	}
}


double money_handler::showTotal(){
return total;
}


double money_handler::updateTotal(double newTotal){
return total += newTotal;
}






