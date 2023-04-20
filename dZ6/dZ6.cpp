#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #5.1.1\n\n";
	int ch_code;
	char ch;
	cout << "Please, enter a character:\n";
	cin >> ch;
	ch_code = (int)ch;
	if (((ch_code >= 65) && (ch_code <= 90)) ||
		((ch_code >= 97) && (ch_code <= 122)))
	{
		cout << "You entered a letter";
	}
	else if ((ch_code >= 48) && (ch_code <= 57))
	{
		cout << "You entered a digit";
	}
	else if ((ch_code == 33) || ((ch_code >= 44) &&
		(ch_code <= 46)) || (ch_code == 58) ||
		(ch_code == 59) || (ch_code == 63))
	{
		cout << "You entered a punctuation mark";
	}
	else
	{
		cout << "You entered an unknown symbol";
	}
	return 0;
}