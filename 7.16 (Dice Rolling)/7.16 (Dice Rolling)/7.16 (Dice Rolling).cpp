// 7.16 (Dice Rolling).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <stdlib.h>     /* srand, rand */
using namespace std;
int main()
{
	int dice1, dice2 = 0;
	int array[36000];
	int sum[11] = { 0 };
	for (int i = 0; i < 36000; i++) {
	dice1	= 1 + rand() % 6;
	dice2 = 1 + rand() % 6;
	array[i] = dice1 + dice2;
	}
	for (int i = 2; i <= 12; i++) {
		for (int j = 0; j < 36000; j++) {
			if (array[j] == i) {
				++sum[i - 2];
			}
		}

	}
	cout << " Sum" << setw(10) << "occurance" << endl;
	for (int i = 0; i < 11; i++) {

		cout << i+2 << setw(10) << sum[i] << endl;
	}
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
