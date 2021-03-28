#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
	string userNameInput;
	int userPriceInput;
	int userQuantityInput;
	//int grandTotal;


	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, userNameInput);
	cout << "Enter the item price:" << endl;
	cin >> userPriceInput;
	cout << "Enter the item quantity:" << endl;
	cin >> userQuantityInput;

	cout << endl;
	ItemToPurchase item1(userNameInput, userPriceInput, userQuantityInput);

	cin.ignore();

	cout << "Item 2" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, userNameInput);
	cout << "Enter the item price:" << endl;
	cin >> userPriceInput;
	cout << "Enter the item quantity:" << endl;
	cin >> userQuantityInput;

	cout << endl;
	ItemToPurchase item2(userNameInput, userPriceInput, userQuantityInput);


	cout << "TOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
	cout << endl;
	cout << "Total: $" << (item2.GetPrice() * item2.GetQuantity()) + (item1.GetPrice() * item1.GetQuantity()) << endl;

	return 0;
}