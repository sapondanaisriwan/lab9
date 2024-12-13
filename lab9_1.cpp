#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
	double load, rate, amount;
	// int load = 1000, rate = 5, amount = 100;
	cout << "Enter initial loan: ";
	cin >> load;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	// use 'setw' to set width of table and 'left' to set left-alignment
	// you can change input argument of 'setw()' to see the effect
	// Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	// use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	// you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	double endOfYear, prevBalance, interest, total, payment, newBalance;
	int i = 1;
	while (true)
	{
		endOfYear = i;
		if (endOfYear == 1)
		{
			prevBalance = load;
		}
		interest = prevBalance * (rate / 100.0);
		total = prevBalance + interest;
		payment = amount;
		newBalance = total - payment;
		if (newBalance <= 0)
		{
			payment = total;
			newBalance = 0;
		}
		cout << setw(13) << left << i;
		cout << setw(13) << left << prevBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance << endl;
		prevBalance = newBalance;
		if (newBalance == 0)
			break;
		i++;
	}

	// cout << setw(13) << left << 1;
	// cout << setw(13) << left << 1000.0;
	// cout << setw(13) << left << 50.0;
	// cout << setw(13) << left << 1050.0;
	// cout << setw(13) << left << 100.0;
	// cout << setw(13) << left << 950.0;
	cout << "\n";

	return 0;
}
