// 6.24Separating Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int NumberofDigits(int x) {
	int counter = 0;
	do 
	{
		x /= 10;
		counter++;
	}while (x!=0);
	return counter;
}
void DisplaySeries(int x) {
	
	int digits = NumberofDigits(x);
	
	while (digits != 0) {
		int b = 0;
		b = x / (pow(10, digits - 1));
		b %= 10;
		cout << b;
		cout << "  ";
		digits--;
	}


}

int main()
{
	int x = 4023;
	if (x > 1 && x < 32767) {
		DisplaySeries(x);
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
