#include "Pizza_1.h"
#include "Order.h"
#include <iostream>
#include <string>
using namespace std;

Pizza_1::Pizza_1()
{
	crust = 0;
	sauce = 0;
	toppingM = 0;
	toppingV = 0;
	//balance = 200;
	total = 0;
	quantity = 1;
	deposit = 0;
}

int Pizza_1::getCrust()
{
	switch (crust) {
	case 1:
		balance -= 2.5;
		total += 2.5;
		break;
	case 2:
		balance -= 3.5;
		total += 3.5;
		break;
	default:
		break;
	}
	return crust;
}

void Pizza_1::setCrust(int c)
{
	crust = c;
}

int Pizza_1::getSauce()
{
	switch (sauce) {
	case 1:
		balance -= 5;
		total += 5;
		break;
	case 2:
		total += 7;
		balance -= 7;
		break;
	}
	return sauce;
}

void Pizza_1::setSauce(int s)
{
	sauce = s;
}

int Pizza_1::getToppingM()
{
	switch (toppingM) {
	case 1:
		balance -= 4.25;
		total += 4.25;
		break;
	case 2:
		balance -= 6.75;
		total += 6.75;
		break;
	case 3:
		balance -= 7.25;
		total += 7.25;
		break;
	}
	return toppingM;
}

void Pizza_1::setToppingM(int m)
{
	toppingM = m;
}

int Pizza_1::getToppingV()
{
	switch (toppingV) {
	case 1:
		balance -= 3;
		total += 3;
		break;
	case 2:
		balance -= 2;
		total += 2;
		break;
	case 3:
		balance -= 3;
		total += 3;
		break;
	}
	return toppingV;
}

void Pizza_1::setToppingV(int v)
{
	toppingV = v;
}

int Pizza_1::getQuantity()
{
	return quantity;
}

void Pizza_1::setQuantity(int q)
{
	quantity = q;
	total *= quantity;
	balance -= total;
}

double Pizza_1::getTotal()
{
	return total;
}

void Pizza_1::setBalance(double amount)
{
	this->balance = amount;

}

void Pizza_1::setDeposit(double amount)
{
	this->deposit += amount;
}

ostream& operator<<(ostream& o, Pizza_1& p)
{
	string c[3] = { "THIN","STUFFED", "NO" };
	string s[3] = { "CLASSIC","BARBEQUE","NO" };
	string m[4] = { "PEPPERONI","MEATBALL","BACON","NO_MEAT" };
	string v[4] = { "MUSHROOM", "SPINACH","ONION","NO_VEGGIES" };


	o << "Crust: " << c[p.getCrust() - 1] << endl;
	o << "Sauce: " << s[p.getSauce() - 1] << endl;
	o << "Topping 1: " << m[p.getToppingM() - 1] << endl;
	o << "Topping 2: " << v[p.getToppingV() - 1] << endl;
	o << "Total: " << p.getTotal() << endl;
	return o;
}

istream& operator>>(istream& i, Pizza_1& p)
{
	i >> p.crust;
	i >> p.sauce;
	i >> p.toppingM;
	i >> p.toppingV;
	return i;
}


/*void Pizza_1::pizzaSelect()//crust: crispy, thin, stuffed; sauce: classic, barbeque------Pepperoni, meatball, bacon; mushrooms,spinach, onions
{
	string c, s, m, v;
	switch (crust) {
	case 1:
		c = "THIN";
		balance -= 2.5;
		total += 2.5;
		break;
	case 2:
		c = "STUFFED";
		balance -= 3.5;
		total += 3.5;
		break;
	default:
		c = "NO";
		break;
	}
	switch (sauce) {
	case 1:
		s = "CLASSIC";
		balance -= 5;
		total += 5;
		break;
	case 2:
		s = "BARBEQUE";
		total += 7;
		balance -= 7;
		break;
	default:
		s = "NO";
		break;
	}
	switch (toppingM) {
	case 1:
		m = "PEPPERONI";
		balance -= 4.25;
		total += 4.25;
		break;
	case 2:
		m = "MEATBALL";
		balance -= 6.75;
		total += 6.75;
		break;
	case 3:
		m = "BACON";
		balance -= 7.25;
		total += 7.25;
		break;
	default:
		m = "NO MEAT";
		break;
	}
	switch (toppingV) {
	case 1:
		v = "MUSHROOM";
		break;
	case 2:
		v = "SPINACH";
		break;
	case 3:
		v = "ONION";
		break;
	default:
		v = "NO VEGGIES";
		break;
	}

	cout << c << " crust with " << s << " sauce, " << m << ", and " << v << " on top.\n";
}*/