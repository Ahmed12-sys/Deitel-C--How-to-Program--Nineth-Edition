// fig15_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <iterator>
#include <stdexcept>
using namespace std;
int main()
{
	const size_t SIZE = 6;
	array<int, SIZE> values = { 1,2,3,4,5,6 };
	vector<int> integers(values.cbegin(), values.cend()); // the values in " values" are now located in "integers" 
	ostream_iterator<int> output(cout, " ");
	cout << "Vector integers contains: ";

	copy(integers.cbegin(), integers.cend(), output);

	cout << "\nFirst element of integers: " << integers.front()
		<< "\nLast element of integers: " << integers.back();


	//integers[0] = 7; // set first element to 7
	//integers.at(2) = 10; // set element at position 2 to 10
	//// insert 22 as 2nd element
	//integers.insert(integers.cbegin() + 1, 22);
	//cout << "\n\nContents of vector integers after changes: ";
	//copy(integers.cbegin(), integers.cend(), output);

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
