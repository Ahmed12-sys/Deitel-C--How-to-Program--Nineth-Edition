// Fig15_10.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

template<typename T> void printVector(const vector<T>& integers2);
int main()
{
	const size_t SIZE = 6;
	int values[SIZE] = { 1,2,3,4,5,6 };
	

	vector< int > integers; // create vector of ints
	
		
	cout << "The initial size of integers is: " << integers.size();
	cout << "\nThe initial capacity of integers is: " << integers.capacity();

	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);

	cout << "\nThe size of integers is: " << integers.size()
		<< "\nThe capacity of integers is: " << integers.capacity();

	cout << "\n\nOutput built-in array using pointer notation: ";

	for (const int* ptr = begin(values); ptr != end(values); ++ptr) 
		cout << *ptr << ' ';
	
	cout << "\nOutput vector using iterator notation: ";
	printVector(integers);
	cout << "\nReversed contents of vector integers: ";

		for (auto reverseIterator = integers.crbegin(); reverseIterator != integers.crend(); ++reverseIterator)
			cout << *reverseIterator << ' ';

		cout << endl;
	
		
	return 0;
}
// function template for outputting vector elements
template < typename T > 
void printVector(const vector< T >& integers2)
{
	//for (auto constiterator = integers2.cbegin();constiterator != integers2.cend(); ++constiterator)
	//	cout << *constiterator <<' ';

	for (auto const& item : integers2)
		cout << item << " ";


} // end function printVector

// display vector elements using const_iterator

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
