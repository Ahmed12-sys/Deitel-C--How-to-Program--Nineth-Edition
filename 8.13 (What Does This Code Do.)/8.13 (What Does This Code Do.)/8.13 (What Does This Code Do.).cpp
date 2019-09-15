// Ex. 8.13: ex08_13.cpp
// What does this program do?
#include <iostream>
using namespace std;
void mystery1(char*, const char*); //
int main()
{
	char string1[80];
	char string2[80];
	cout << "Enter two strings: ";
	cin >> string1 >> string2;
	mystery1(string1, string2);
	cout << string1 << endl;
} // end main
// What does this function do?
void mystery1(char* s1, const char* s2)
{
	while (*s1 != '\0')
		++s1;
	for (; (*s1 = *s2); ++s1, ++s2)
		; // empty statement
} // end function mystery1
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
