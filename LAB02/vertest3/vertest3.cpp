#include <iostream>
#include <string>
using namespace std;

int main() {
	string itemName;
	float price;
	int qty;
	float total;

	cout << "Enter item name: ";
	getline(cin, itemName);

	cout << "Enter price: ";
	cin >> price; // Prompt user to input price

	cout << "Enter quantity: ";
	cin >> qty; // Prompt user to input quantity

	total = price * qty;

	cout << endl;

	cout << "------- Receipt -------" << endl;
	cout << "item	: " << itemName << endl;
	cout << "price	: " << price << endl;
	cout << "Qty	: " << qty << endl;
	cout << "Total	: " << total << endl;
	cout << "-----------------------" << endl;

	return 0;
}