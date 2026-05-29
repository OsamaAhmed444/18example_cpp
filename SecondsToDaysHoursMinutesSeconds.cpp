//#include <iostream>
//using namespace std;
//
//int main() {
//	const int SecondsPerDay = 24 * 60 * 60, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;
//	int secondsInput, days, hours, minutes, seconds;
//
//	cout << "Enter the number of seconds: ";
//	cin >> secondsInput;
//
//	days = secondsInput / SecondsPerDay;
//	hours = secondsInput % SecondsPerDay / SecondsPerHour;
//	minutes = secondsInput %  SecondsPerHour / SecondsPerMinute;
//	seconds = secondsInput % SecondsPerMinute;
//
//	cout << secondsInput << " seconds is equivalent to: " << endl;
//	cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;
//	
//	return 0;
//}