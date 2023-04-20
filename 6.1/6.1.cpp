#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #5.1.2\n\n";
	int userOp, companionOp, callMin;
	float minOutKS, minOutV, minOutLC;
	minOutKS = 2;
	minOutV = 3;
	minOutLC = 2.5;
	cout << "1- Orange\n";
	cout << "2- Vodafone\n";
	cout << "3- AT&T\n\n";
	cin >> userOp;
	cout << "Select your companion mobile operator:\n";
	cout << "1- Orange\n";
	cout << "2- Vodafone\n";
	cout << "3- AT&T\n\n";
	cin >> companionOp;
	cout << "Enter the call duration:\n";
	cin >> callMin;
	if (userOp == companionOp)
	{
		cout << "No fee!";
	}
	else if (userOp == 1)
	{
		cout << "Call cost - " << callMin * minOutKS;
	}
	else if (userOp == 2)
	{
		cout << "Call cost - " << callMin * minOutV;
	}
	else if (userOp == 3)
	{
		cout << "Call cost - " << callMin * minOutLC;
	}
	else
	{
		cout << "Wrong input!";
	}
	return 0;
}