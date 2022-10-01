#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double s;
	double t;
	cout << "Enter distance in kilometers - s" << endl;
	cin >> s;
	cout << "Enter time in minutes - t" << endl;
	cin >> t;
	cout << "Speed must be " << 60 * s / t << " kilometers per hour" << endl;

	return 0;
}