#include<iostream>
#include<string>
using namespace std;

int main()
{
	int longstr = 0, l = 0;
	int i = 0;
	bool palindrome = true;
	string str, longstart, longend;
	setlocale(LC_ALL, "rus");
	cout << "Введите слово на проверку палиндрома" << endl;
	cin >> str;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		longstr = i / 2;
		l = i / 2;
		l++;
		for (int j = 0; j < longstr; j++)
		{
			longstart = str[j];
			l++;
			for (;l < i; )
			{
				longend = str[l];
				if (longstart != longend)
				{
					palindrome = false;
					break;
				}
				if (longstart == longend)
				{
					break;
				}
			}
		}
	}
	else
	{
		palindrome = false;
	}

	if (palindrome == true)
	{
		cout << "Ваше слово палиндром" << endl;
	}
	else
	{
		cout << "Ваше слово не палидром" << endl;
	}
}