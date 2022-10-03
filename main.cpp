#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
	int t, a, b, c, d, e, f, g;
	cout << "Insert time from begining of the day in seconds" << endl;
	cin >> t; 
	a = t / 3600;                           //годин від початку дня
	b = (t - (a * 3600)) / 60;              //хвилин
	c = t - (a * 3600) - (b * 60);          //секунд
	d = (24 * 3600) - t;                    //Загалом секунд до півночі
	e = d / 3600;                           //годин до півночі
	f = (d - (e * 3600)) / 60;              //хвилин
	g = d - (e * 3600) - (f * 60);          //секунд

	if (t > 0 && t <= (24 * 3600))
	{
		cout << "Time is now: " << a << " " << b << " " << c << endl;
		cout << "Til midnight left: " << e << " " << f << " " << g << endl;
	}
	else
	{
		cout << "Entered wrong time" << endl;
	}
	return 0;
}