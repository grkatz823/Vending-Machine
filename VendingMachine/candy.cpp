//.................................................

//Greg Katz
//cs 203
//Barry Jones
//Assignment 3
// Candy Class

#include <iostream>
#include "candy.h"
#include<string>
using namespace std;

 
candy::candy()
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

void candy::setName(string setName){
name = setName;
}

void candy::setPrice(double setPrice){
price = setPrice;
}

void candy::setAvailable(int setAvailable){
available = setAvailable;
}
