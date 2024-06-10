#include <iostream>
using namespace std;
int main() {
	int min; // User input: Minutes
	int hrs, minRem; // Hours, & min
//remaining
	cout << "Enter minutes: ";
	cin >> min;
	hrs = min / 60;
	minRem = min % 60;
	cout << min << " minutes is ";
	cout << hrs << " hours and ";
	cout << minRem << " minutes.\n";
	return 0;
}
