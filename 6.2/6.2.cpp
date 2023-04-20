#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #5.1.3\n\n";
	int income, lateNum, codeRows, penalty, userChoice;
	float rowPrice, temp;
	penalty = 0;
	rowPrice = 0.5;

	cout << "Select menu item:\n";
	cout << "1- income and number of lateness-> "
		"number of code lines\n";
	cout << "2- income and number of code lines -> "
		"number of lateness\n";
	cout << "3- >number of lateness and number "
		"of code lines ->income\n";
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
	{
		cout << "Input income wished by user\n";
		cin >> income;
		cout << "How many times user was late?\n";
		cin >> lateNum;
		codeRows = income / rowPrice;
		if (lateNum >= 3)
		{
			penalty = lateNum / 3 * 20;
			codeRows = codeRows + penalty / rowPrice;
		}
		cout << "number of code lines: " << codeRows;
		cout << "\n";
		break;
	}
	case 2:
	{
		cout << "Input income wished by user\n";
		cin >> income;
		cout << "Input number of code lines\n";
		cin >> codeRows;
		temp = codeRows * rowPrice;
		if (income >= temp)
		{
			cout << "You are not allowed to be late!";
		}
		else
		{
			lateNum = (temp - income) / 20 * 3;
			cout << "You are allowed to be late ";
			cout << lateNum << " or " << lateNum + 1;
			cout << " or " << lateNum + 2 << " times";
		}
		break;
	}
	case 3:
	{
		cout << "Input number of code lines\n";
		cin >> codeRows;
		cout << "How many times user was late?\n";
		cin >> lateNum;
		temp = codeRows * rowPrice;
		if (lateNum >= 3)
		{
			penalty = lateNum / 3 * 20;
			if (penalty >= temp)
			{
				cout << "You’ll get nothing\n";
			}
			else
			{
				income = temp - penalty;
				cout << "You’ll get " << income;
				cout << "$\n";
			}
		}
		else
		{
			income = temp;
			cout << "You’ll get " << income << "$\n";
		}
		break;
	}
	default:
		cout << "Wrong input!";
	}
	return 0;
}