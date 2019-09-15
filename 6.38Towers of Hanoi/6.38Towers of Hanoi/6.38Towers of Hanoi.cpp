// 6.38Towers of Hanoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void TowersofHanoi(int n, char A, char B, char C) {

	if (n == 1) {
		std::cout << "Disk " << n << "from " << A << " to " << C << std::endl;
		return;
	}
	else
		 TowersofHanoi(n - 1, A, C, B);
		std::cout << "Disk " << n << "from " << A << " to " << C << std::endl;


	TowersofHanoi(n - 1, B,A, C);

}
int main()
{
   // std::cout << "Hello World!\n";
	TowersofHanoi(3, 'A', 'B', 'C');
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
