// 7.10 (Salesperson Salary Ranges).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int, 9> arrCounters = {};
	array<int, 5> arrSalesPersons = { 300,200,1200,333,700 };

	for (size_t i = 0; i < arrSalesPersons.size(); ++i)
	{
		if (arrSalesPersons[i] >= 200 && arrSalesPersons[i] <= 299)
			++arrCounters[0];
		if (arrSalesPersons[i] >= 300 && arrSalesPersons[i] <= 399)
			++arrCounters[1];
		if (arrSalesPersons[i] >= 400 && arrSalesPersons[i] <= 499)
			++arrCounters[2];
		if (arrSalesPersons[i] >= 500 && arrSalesPersons[i] <= 599)
			++arrCounters[3];
		if (arrSalesPersons[i] >= 600 && arrSalesPersons[i] <= 699)
			++arrCounters[4];
		if (arrSalesPersons[i] >= 700 && arrSalesPersons[i] <= 799)
			++arrCounters[5];
		if (arrSalesPersons[i] >= 800 && arrSalesPersons[i] <= 899)
			++arrCounters[6];
		if (arrSalesPersons[i] >= 900 && arrSalesPersons[i] <= 999)
			++arrCounters[7];
		else if (arrSalesPersons[i] > 999)
			++arrCounters[8];
	}
	//display the data using Bar chart
	cout << "Salesperson weekly salery distribution\n";
	for (size_t i = 0; i < arrCounters.size(); ++i) {
		if (i == 0) {
			cout << "200-299: ";
		}
		else if (8 == i) {
			cout << "999>=: ";

		}
		else
		{
			cout << i + 2 << "00 - " << i + 2 << "99: ";
		}

		for (size_t j = 0; j < arrCounters[i]; ++j) {
			cout << "*";
		}
		cout << endl;



	}

		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
