#include <iostream>
using namespace std;

int main() {
	int Months, LoanAmount;

	cout << "Enter the Loan amount: ";
	cin >> LoanAmount;
	cout << "Enter the number of months: ";
	cin >> Months;

	int MonthlyPayment = LoanAmount / Months;
	cout << "The monthly payment is: " << MonthlyPayment << endl;

	return 0;
}
