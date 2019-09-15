// 8.14 (What Does This Code Do).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Ex. 8.14: ex08_14.cpp
// What does this program do?
#include <iostream>
using namespace std;
int mystery2(const char*); // prototype
int main()
{
	char string1[80];
	cout << "Enter a string: ";
	cin >> string1;
	cout << mystery2(string1) << endl;
} // end main
// What does this function do?
int mystery2(const char* s)
{
	unsigned int x;
	for (x = 0; *s != '\0'; ++s)
		++x;
	return x;
} // end function mystery2

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
