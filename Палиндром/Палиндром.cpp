#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	string n;
	cout << "Введите слово: ";
	cin >> n;

	if (n != string(n.rbegin(), n.rend()))
	{
		cout << "Строка не палидром";
	}
	else
	{
		cout << "Строка палидром";
	}
	return 0;
}