#include <iostream>
using namespace std;

int main() {
	int mark1, mark2, mark3;
	cout << "Please Enter Three Marks: ";
	cin >> mark1 >> mark2 >> mark3;
	cout << "\n The Average of " << mark1 << " + " << mark2 << " + " << mark3 << " is: " << (mark1 + mark2 + mark3) / 3.0 << "\n";
}
