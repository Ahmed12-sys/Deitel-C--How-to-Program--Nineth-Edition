// 8.08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define SIZE 5
int main()
{	//a
	unsigned int values[SIZE] = { 2 ,4,6,8,10 };
	//b
	unsigned int* vPtr;
	//c
	for (int i = 0; i < SIZE; i++) {
		std::cout << values[i];
	}
	//d
	vPtr = values;//vptr=&(values[0])
	//e Use a for statement to display the elements of built-in array values using pointer/offset
	//notation.
	for (int i = 0; i < SIZE; i++) {
		std::cout << *(vPtr+i);
	}
	//f use a for statement to display the elements of built-in array values using pointer/offset
	//notation with the built - in array’s name as the pointer.
	for (int i = 0; i < SIZE; i++) {
		std::cout << *(values + i);
	}
	//g Use a for statement to display the elements of built-in array values by subscripting the
	/*pointer to the built - in array.*/
	for (int i = 0; i < SIZE; i++) {
		std::cout << vPtr[i];
	}
	//h Refer to the fifth element of values:
	//array subscript notation
	//values[4];
	//pointer/offset notation with the built-in array name’s as the pointer
	//*(values+4);
	//pointer subscript notation
	//vPtr[3];
	// pointer / offset notation.
	//*(vPtr + 4);
    std::cout << "Hello World!\n";
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
