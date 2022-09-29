#include "Children.h"
#include "Order.h"
#include <iostream>
#include <string>
using namespace std;

Children::Children()
{
	foods = 0;
	drinks = 0;
	quantity = 1;
	deposit = 0;
	total = 0;
}

Children::Children(SurpriseGift<bool> coupon, SurpriseGift<bool> cashback, SurpriseGift<bool> giftcard, SurpriseGift<bool> toys)
{
	this->coupon = coupon;
	this->cashback = cashback;
	this->giftcard = giftcard;
	this->toys = toys;
}

string f[3] = { "TINY PIZZA", "TINY PIZZA BUT CHEAPER" };
string sd[3] = { "SODA", "JUICE","WATER" };

void Children::setFoods(int f)
{
	this->foods = f;
	switch (foods) {
	case 1:
		this->balance -= 12;
		this->total += 12;
		break;
	case 2:
		this->balance -= 11;
		this->total += 11;
		break;
	}
}

int Children::getFoods() 
{
	switch (foods) {
	case 1:
		this->balance -= 12;
		this->total += (12*quantity);
		break;
	case 2:
		this->balance -= 11;
		this->total += (11 * quantity);
		break;
	}
	return foods;
}

void Children::setDrinks(int d)
{
	drinks = d;
	switch (drinks) {
	case 1:
		balance -= 6;
		total += 6;
		break;
	case 2:
		balance -= 5;
		total += 5;
		break;
	}
}

int Children::getDrinks() 
{
	switch (drinks) {
	case 1:
		balance -= 6;
		total += (6 * quantity);
		break;
	case 2:
		balance -= 5;
		total += (5 * quantity);
		break;
	}
	return drinks;
}

double Children::getTotal()
{
	return total;
}

void Children::setBalance(double amount)
{
	balance = amount;
}

void Children::setDeposit(double amount)
{
	balance += deposit;
	total += deposit;
}

double Children::getBalance() 
{
	return balance;
}

double Children::getDeposit() 
{
	return deposit;
}

ostream& operator<<(ostream& o, Children& c)
{
	o << "Foods: " << f[c.getFoods() - 1] << endl;
	o << "Drinks: " << sd[c.getDrinks() - 1] << endl;
	o << "Total: $" << c.getTotal() << endl;

	if (c.getTotal() < 325){
		o << "You get a 25% off for your next purchase.\n";
	}
	else if (c.getTotal() > 325 && c.getTotal() < 360) {
		o << "You get a random action figure.\n";
	}
	else if (c.getTotal() > 360 && c.getTotal() < 400) {
		o << "You get a 35% cashback for the next purchase.\n";
	}
	else if (c.getTotal() >= 400) {
		o << "You get a $50 giftcard for the next purchase.\n";
	}

	return o;
}

istream& operator>>(istream& i, Children& c)
{
	i >> c.foods;
	i >> c.drinks;
	i >> c.quantity;
	return i;
}
