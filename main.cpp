#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
	double s, w, c1, c2, c3, a1, a2, a3, b1, b2, b3;
	int i;
	int n1 = 1, n2 = 1, n3 = 1;
	
	cout << "Enter trip distance" << endl;
	cin >> s;
	cout << "Enter gasoline consumption on 100 km" << endl;
	cin >> w;
	cout << "Enter gasoline cost in $ of 3 different tipes in format: tipe1 tipe2 tipe3" << endl;
	cin >> c1 >> c2 >> c3;

	a1 = s / 100 * w * c1;
	a2 = s / 100 * w * c2;
	a3 = s / 100 * w * c3;
	b1 = a1;
	b2 = a2;
	b3 = a3;

	while ((a1/= 10) > 0) n1++; //дізнаємося кількість символів в результуючій ціні для правильності відображення таблиці - ціла частина
	while ((a2/= 10) > 0) n2++;
	while ((a3/= 10) > 0) n3++;
	n1 = n1 + 3;                //додаємо дробові 3 знаки - кома + 2 після коми
	n2 = n2 + 3;
	n3 = n3 + 3;

	if (s > 0 && w > 0 && c1 > 0 && c2 > 0 && c3 > 0)
	{
		cout << fixed;
		cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
		cout << char(179) << " Tipe1 " << char(179) << " Tipe2 " << char(179) << " Tipe3 " << char(179) << endl;
		cout << char(195) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180) << endl;
		cout << setprecision(2) << char(179) << b1 << char(179) << b2 << char(179) << b3 << char(179) << endl;
		cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
	}
	else
	{
		cout << "Entered wrong numbers" << endl;
	}

	return 0;
}