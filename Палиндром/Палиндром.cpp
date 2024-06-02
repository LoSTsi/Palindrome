#include<iostream>
#include<string>
using namespace std;

void revers_str(string& revers, string& str, int size, int size_old)
{
	size_old++;
	size--;
	int j = 0;
	for (int i = 0; i <= size; size--)
	{
		revers.resize(size_old);
		revers[j] = str[size];
		j++;
	}
}

string comparison(string& revers, string& str, const int size)
{
	bool a = true;
	for (int i = 0; i < size; i++)
	{
		if (revers[i] != str[i])
		{
			a = false;
		}
	}
	if (a == true)
	{
		return"да";
	}
	else
	{
		return"нет";
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "палиндром ? ";
	string str;
	string revers;
	cin >> str;
	int size_str = str.size();
	revers_str(revers, str, size_str, size_str);
	cout << comparison(revers, str, size_str) << endl;
}