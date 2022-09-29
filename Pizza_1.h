#ifndef PIZZA_1_H
#define PIZZA_1_H
#include "Order.h"
#include <iostream>
#include <string>
using namespace std;
class Pizza_1 : public Order
{
private:
	int crust, sauce; //crust: crispy, stuffed; sauce: classic, barbeque
	int toppingM, toppingV; // Pepperoni, meatball, bacon; mushrooms,spinach, onions
	double balance, total, deposit;
	int quantity;
public:
	Pizza_1();

	int getCrust();
	void setCrust(int c);
	int getSauce();
	void setSauce(int s);
	int getToppingM();
	void setToppingM(int m);
	int getToppingV();
	void setToppingV(int v);
	int getQuantity();
	void setQuantity(int q);
	double getTotal();
	virtual void setBalance(double amount);
	virtual void setDeposit(double amount);

	friend ostream& operator<<(ostream& o, Pizza_1& p);
	friend istream& operator>>(istream& i, Pizza_1& p);
};

#endif