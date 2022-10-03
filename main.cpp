#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  // Код вірний тільки для "реільної" ціни в $ (невеликі значення і різниця між цінами). В іншому випадку - потрібно змінювати таблицю в залежности від n1, n2, n3 які можуть бути різними і з умовою n1 != n2 != n3

int main() 
{
	double s, w, c1, c2, c3, a1, a2, a3;
	int i, b1, b2, b3;
	int n1 = 1, n2 = 1, n3 = 1;
	
	cout << "Enter trip distance" << endl;
	cin >> s;
	cout << "Enter gasoline consumption on 100 km" << endl;
	cin >> w;
	cout << "Enter gasoline cost in $ of 3 different types in format: type1 type2 type3" << endl;
	cin >> c1 >> c2 >> c3;

	a1 = (s / 100) * w * c1;
	a2 = (s / 100) * w * c2;
	a3 = (s / 100) * w * c3;
	b1 = a1;                          //відрізаємо дробову частину a (b int)
	b2 = a2;
	b3 = a3;

	while ((b1 /= 10) > 0) n1++;      //дізнаємося кількість символів в результуючій ціні для правильності відображення таблиці - ціла частина
	while ((b2 /= 10) > 0) n2++;
    while ((b3 /= 10) > 0) n3++;
	
	n1 = n1 + 3;                      //додаємо дробові 3 знаки - кома + 2 після коми
	n2 = n2 + 3; 
	n3 = n3 + 3;

	//cout << n1 << " " << n2 << " " <<  n3 << endl;

	if (s > 0 && w > 0 && c1 > 0 && c2 > 0 && c3 > 0 && n1 == 4 && n2 == 4 && n3 == 4)
	{
		cout << fixed;
		cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
		cout << char(179) << " Type1 " << char(179) << " Type2 " << char(179) << " Type3 " << char(179) << endl;
		cout << char(195) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180) << endl;
		cout << setprecision(2) << char(179) << "  " << a1 << " " << char(179) << "  " << a2 << " " << char(179) << "  " << a3 << " " << char(179) << endl;
		cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
	}
	else if (s > 0 && w > 0 && c1 > 0 && c2 > 0 && c3 > 0 && n1 == 5 && n2 == 5 && n3 == 5)
	{
		cout << fixed;
		cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
		cout << char(179) << " Type1 " << char(179) << " Type2 " << char(179) << " Type3 " << char(179) << endl;
		cout << char(195) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180) << endl;
		cout << setprecision(2) << char(179) << " " << a1 << " " << char(179) << " " << a2 << " " << char(179) << " " << a3 << " " << char(179) << endl;
		cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
	}
	else if (s > 0 && w > 0 && c1 > 0 && c2 > 0 && c3 > 0 && n1 == 6 && n2 == 6 && n3 == 6)
	{
		cout << fixed;
		cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
		cout << char(179) << " Type1 " << char(179) << " Type2 " << char(179) << " Type3 " << char(179) << endl;
		cout << char(195) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180) << endl;
		cout << setprecision(2) << char(179) << " " << a1 << char(179) << " " << a2 << char(179) << " " << a3 << char(179) << endl;
		cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
	}
	else if (s > 0 && w > 0 && c1 > 0 && c2 > 0 && c3 > 0 && n1 == 7 && n2 == 7 && n3 == 7)
	{
		cout << fixed;
		cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
		cout << char(179) << " Type1 " << char(179) << " Type2 " << char(179) << " Type3 " << char(179) << endl;
		cout << char(195) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180) << endl;
		cout << setprecision(2) << char(179) << a1 << char(179) << a2 << char(179) << a3 << char(179) << endl;
		cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
	}
	else
	{
		cout << "Entered wrong numbers" << endl;
	}
	
	return 0;
}