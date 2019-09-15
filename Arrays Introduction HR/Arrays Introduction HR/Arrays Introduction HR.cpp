#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int size ;
	cin >> size;
	int* myArray = new int[size];

	for (size_t i = 0; i < size; i++) {
		cin >> myArray[i];
	}
	for (int i = 0; i < size; i++) {
		cout << myArray[size-1-i];
		cout << " ";
	}
	delete[] myArray;
	return 0;
}
