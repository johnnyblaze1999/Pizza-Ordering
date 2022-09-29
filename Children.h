#ifndef CHILDREN_H
#define CHILDREN_H
#include "Order.h"
#include "SurpriseGift.h"
#include <iostream>
#include <string>
using namespace std;

class Children 
{
private:
	double balance, deposit, total;
	int foods, drinks, quantity;
	SurpriseGift<bool> coupon;
	SurpriseGift<bool> cashback;
	SurpriseGift<bool> giftcard;
	SurpriseGift<bool> toys;
public:
	Children();
	Children(SurpriseGift<bool> coupon, SurpriseGift<bool> cashback, SurpriseGift<bool> giftcard, SurpriseGift<bool> toys);
	int getFoods();
	void setFoods(int f);
	int getDrinks();
	double getTotal();
	void setDrinks(int d);
	virtual void setBalance(double amount);
	virtual void setDeposit(double amount);

	double getBalance();
	double getDeposit();

	friend ostream& operator<<(ostream& o, Children& c);
	friend istream& operator>>(istream& i, Children& c);
};

#endif