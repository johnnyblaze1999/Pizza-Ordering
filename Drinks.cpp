#include "Drinks.h"
#include <iostream>
#include <string>
using namespace std;

Drinks::Drinks()
{
	this->checkBalance = true;
	this->deposit = 0;
	this->drinks = 0;
	this->balance = 0;
	this->total = 0;
	quantity = 1;
}



bool Drinks::getCheckBalance() const
{
	return checkBalance;
}

void Drinks::setCheckBalance()
{
	if (balance >= 0)
	{
		checkBalance = true;
	}
	else {
		cout << "Insufficient fund in your account.\n Deposit: ";
		checkBalance = false;
		cin >> deposit;
	}
}

double Drinks::getDeposit() const
{
	return deposit;
}

void Drinks::setDeposit(double amount)
{
	deposit += amount;
}

int Drinks::getDrinks()
{
	switch (drinks) {
	case 1:
		balance -= 10;
		this->total += 10;
		break;
	case 2:
		balance -= 17.25;
		this->total += 17.25;
		break;
	}
	return drinks;
}

void Drinks::setDrinks(int d)
{
	drinks = d;
	switch (drinks) {
	case 1:
		balance -= 10;
		this->total += 10;
		break;
	case 2:
		balance -= 17.25;
		this->total += 17.25;
		break;
	}
	setCheckBalance();
	getCheckBalance();
}

int Drinks::getQuantity() const
{
	return quantity;
}

void Drinks::setQuantity(int q)
{
	quantity = q;
	this->total *= quantity;
	balance -= quantity;
}

double Drinks::getBalance()
{
	return balance;
}

double Drinks::getTotal() const
{
	return this->total;
}

void Drinks::setBalance(double amount)
{
	balance += deposit;
}

ostream& operator<<(ostream& o, Drinks& d)
{
	string sd[3] = { "SODA", "JUICE","WATER" };
	o << "Drink: " << sd[d.getDrinks() - 1] << endl;
	o << "-----------------------------------------------\n\n";
	o << "TOTAL: " << d.getTotal() << endl;
	return o;
}

istream& operator>>(istream& i, Drinks& d)
{
	i >> d.drinks;
	return i;
}
