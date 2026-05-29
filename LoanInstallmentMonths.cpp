#include <iostream>
using namespace std;

int main() {
	int loanAmount, monthlyPayment;

	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << "Enter the monthly payment: ";
	cin >> monthlyPayment;

	int months = loanAmount / monthlyPayment;
	cout << "It will take " << months << " months to pay off the loan." << endl;

	return 0;
}
