#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <string>
using namespace std;

class Order
{
private:
	string username, email;
	double deposit, balance, total;
public:
	Order();
	void setUsername(string user);
	string getUsername();
	void setEmail(string mail);
	string getEmail();
	double getDeposit();
	virtual void setDeposit(double amount) = 0;
	double getBalance();
	virtual void setBalance(double amount) = 0;

	friend ostream& operator<<(ostream& o, const Order& O);
	friend istream& operator>>(istream& i, Order& O);
};

#endif