#include <iostream>
#include <regex>
#include <string>
#include <iomanip>
#include "SurpriseGift.h"
#include "SurpriseGift.cpp"
#include "Pizza_1.h"
#include "Children.h"
#include "Order.h"
#include "Drinks.h"
#include "Children.h"

using namespace std;

int main() {

	SurpriseGift<bool> gift;
	Pizza_1 pizza;
	Drinks drinks;
	Children children;

	int i;
	do {
		int i1;
		string user, email;
		cout << setw(5) << "MENU\n";
		cout << "1. Enter your information\n";
		cout << "0. Exit\n";
		cout << "> ";

		try {
			cin >> i;
			if (i < 0) {
				throw 123;
			}
			else if (i > 1) {
				throw 12;
			}

		}
		catch (int x) { cout << "Invalid Input. ERROR: " << x << endl; }
		
		if (i == 1) {
			do {
				cout << "Enter your prefered username and personal email with an ENTER in between:\n";
				cout << "> ";
				cin >> user >> email;
				cout << endl << setw(5) << "WELCOME " << user << "!\n";
				cout << "Select buying option: 1. Adult          2.Child\n";
				try {
					cin >> i1;
					if (i1 < 0) {
						throw 345;
					}
					else if (i1 > 2) {
						throw 34;
					}
				}
				catch (int x) { cout << "Invalid Input. ERROR: " << x << endl; }
				if (i1 == 1) {
					cout << "Set up your pizza in this order (Crust - Sauce - Meat topping - Vegetable). Using designated number with SPACE or ENTER in between: \n\n";
					cout << "CRUST:     1. thin crust          2. stuffed crust           3. no crust\n";
					cout << "SAUCE:     1. classic sauce       2. barbeque sauce          3. no sauce\n";
					cout << "TOPPING 1: 1. pepperoni           2. meat ball               3. bacon                 4. no meat\n";
					cout << "TOPPING 2: 1. mushroom            2. spinach                 3. onion                 4. no veggies\n\n";
					cout << "Eg: a thin crust pizza with classic sauce, pepperoni, and mushroom on top is (1 [ENTER] 1 [ENTER] 1 [ENTER] 1)\n>";
					cin >> pizza;
					cout << pizza;
					cout << "\n-------------------------------------------------------------------------\n\n";
					cout << "Choose your drink:\n";
					cout << "DRINKS:    1. soda                2. juice                   3. water\n";
					cin >> drinks;
					cout << "\n-------------------------------------------------------------------------\n\n";
					cout << drinks;
					cout << "TOTAL:         $" << pizza.getTotal() + drinks.getTotal() << endl;
					cout << "Type 0 to quit\n";
					try {
						cin >> i1;
						if (i1 < 0) {
							throw 345;
						}
						else if (i1 > 2) {
							throw 34;
						}
					}
					catch (int x) { cout << "Invalid Input. ERROR: " << x << endl; }
				}
				else if (i1 == 2) {
					cout << "Set up your order with this method (Meal Type - Drink). Using designated number with SPACE or ENTER in between: \n";
					cout << "HAPPY MEAL: 1. small pepperoni pizza         2. tiny pepperoni pizza\n";
					cout << "DRINKS:     1. soda                          2. juice                             3. water\n";
					cout << "QUANTITY:\n";
					cin >> children;
					cout << children;
				}
				cout << "Type 0 to back to main menu\n";
				try {
					cin >> i1;
					if (i1 < 0) {
						throw 345;
					}
					else if (i1 != 0) {
						throw 340;
					}
				}
				catch (int x) { cout << "Invalid Input. ERROR: " << x << endl; }
			} while (i1 != 0);
			cout << "Type 0 again to quit or 1 to rerun the program.\n";
			cin >> i;
			try {
				cin >> i;
				if (i < 0) {
					throw 345;
				}
				else if (i > 1) {
					throw 12;
				}
			}
			catch (int x) { cout << "Invalid Input. ERROR: " << x << endl; }
		}
	} while (i != 0);

	return 0;
}
