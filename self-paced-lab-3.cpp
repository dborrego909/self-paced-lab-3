#include <iostream>
using namespace std;
int main() {
	
	int min, hrs, newHrs, minRem;

	cout << "Enter hours: "; cin >> hrs;
	cout << "Enter min: "; cin >> min;
	minRem = min % 60;
	newHrs = hrs + (min / 60);
	cout << hrs << " hours and " << min
		<< " minutes is " << newHrs << " hours and " << minRem << " minutes." << endl;

}
