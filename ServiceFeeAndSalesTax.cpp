#include <iostream>
using namespace std;

int main() {
	const double serviceFee = 1.1;
	const double salesTax = 1.16;
	float totalBill;

	cout << "Enter Total Bill: ";
	cin >> totalBill;
	
	float totalAmount = totalBill * serviceFee;
	totalAmount = totalAmount * salesTax;

	cout << "Total Amount: " << totalAmount << endl;

	return 0;
}
