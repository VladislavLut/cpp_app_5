#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	int year;

	cout << "Ââåä³òü ð³ê: ";
	cin >> year;
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	int daysinYear = 365 + isLeapYear;
	cout << " Ó " << year << " ðîö³ = " << daysinYear << " äí³â " << endl;
	return 0;
}