#include "Order.h"
#include <iostream>
#include <string>


Order::Order()
{
	username = "";
	email = "";
	balance = 200;
	deposit = 0;
	total = 0;
}

void Order::setUsername(string user)
{
	username = user;
}

string Order::getUsername()
{
	return username;
}

void Order::setEmail(string mail)
{
	email = mail;
}

string Order::getEmail()
{
	return email;
}

double Order::getDeposit()
{
	return deposit;
}

/*void Order::setDeposit(double amount)
{
	balance += amount;
}
*/
double Order::getBalance()
{
	return balance;
}

void Order::setBalance(double amount)
{
	balance = amount;
}

ostream& operator<<(ostream& o, Order& O)
{
	o << "WELCOME " << O.getUsername() << "!"<< endl;
	o << "Balance: " << O.getBalance() << endl;
	return o;
}

istream& operator>>(istream& i, Order& O)
{
	i >> O.username;
	i >> O.email;
	return i;
}
