#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t, a, b, c, e;
	cout << "Insert time from beginig of the work in seconds" << endl;
	cin >> t;
	a = (8 * 3600) - t;             //загалом секунд до к≥нц€ роботи
	b = a / 3600;                   //годин
	c = (a - (b * 3600)) / 60;      //хвилин
	e = a - (b * 3600) - (c * 60);  //секунд

	if (t > 0 && t < 3600 * 8)
	{
		cout << "Time left is: " << b << " " << c << " " << e << endl;
	}
	else
	{
		cout << "Entered wrong time" << endl;
	}
	return 0;
}