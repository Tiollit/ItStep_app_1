#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
	int t, a, b, c, d, e, f, g;
	cout << "Insert time from begining of the day in seconds" << endl;
	cin >> t; 
	a = t / 3600;                           //����� �� ������� ���
	b = (t - (a * 3600)) / 60;              //������
	c = t - (a * 3600) - (b * 60);          //������
	d = (24 * 3600) - t;                    //������� ������ �� ������
	e = d / 3600;                           //����� �� ������
	f = (d - (e * 3600)) / 60;              //������
	g = d - (e * 3600) - (f * 60);          //������

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