#include <iostream>
#include <string>

using namespace std;

static void reverseString(string& destination, const string from)
{
    const int len = from.size();
    destination.resize(from.size());

    for (int i = len; i > 0; i--)
        destination[i - 1] = from[len - i];

}
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Палиндрома ?" << endl;

    string str;
    cin >> str;
    string reversed;

    reverseString(reversed, str);
    if (reversed.compare(str) == 0)
    {
        cout << "палиндром" << endl;
    }
    else
    {
        cout << "не палиндром" << endl;
    }

}