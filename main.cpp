#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double t1, t2, t3, t21, t22, t23;
	cout << "Enter you begining time - hours minutes seconds " << endl;
	cin >> t1 >> t2 >> t3;
	cout << "Enter you end time - hours minutes seconds " << endl;
	cin >> t21 >> t22 >> t23;
	if (t1 >= 0 && t2 >= 0 && t2 <= 60 && t3 >=0 && t3 <= 60 && t21 >= 0 && t22 >= 0 && t22 <= 60 && t23 >= 0 && t23 <= 60 && ((60 * t21 + t22 + t23 / 60) - (60 * t1 + t2 + t3 / 60)) > 0)
	{
		cout << "You journey cost is " << ((60 * t21 + t22 + t23 / 60) - (60 * t1 + t2 + t3 / 60)) * 2 << " grn";
	}
	else
	{
		cout << "Entered wrong time" << endl;
	}
	return 0;
}