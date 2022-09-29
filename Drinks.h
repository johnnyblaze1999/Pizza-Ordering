#ifndef DRINKS_H
#define DRINKS_H
#include "Pizza_1.h"
#include <iostream>
#include <string>
using namespace std;
class Drinks
{
private:
	bool checkBalance;
	double deposit;
	int drinks, quantity;
	double balance, total;
public:
	Drinks();
	bool getCheckBalance() const;
	void setCheckBalance();
	double getDeposit() const;
	int getDrinks();
	void setDrinks(int d);
	int getQuantity() const;
	void setQuantity(int q);
	double getBalance();
	double getTotal() const; 
	virtual void setBalance(double amount);
	virtual void setDeposit(double amount);

	friend ostream& operator<<(ostream& o, Drinks& d);
	friend istream& operator>>(istream& i, Drinks& d);
};

#endif