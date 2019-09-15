// 6.34Guess-the-Number Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x,y;
	y = 1 + rand() % 10;
	while (true) {
		cout << "Please enter a number in the range 1 to 10!\n";
		cin >> x;
		
		if (y == x)
		{
			cout << "Congratulation\n";
			break;
		}
		else if(x>y)
			cout << "Too High! Try again\n";
		else
		{
			cout << "Too Low! Try again\n";

		}
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
