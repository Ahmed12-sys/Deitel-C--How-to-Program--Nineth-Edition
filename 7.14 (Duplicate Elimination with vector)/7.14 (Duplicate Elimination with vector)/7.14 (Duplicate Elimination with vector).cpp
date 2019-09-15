// 7.14 (Duplicate Elimination with vector).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int x;
	int counter = 0;
	vector <int> v;
	for (int i = 0; i < 5; i++) {
		cin >> x;
		v.push_back(x);
		for (size_t j = 0 ; j < v.size(); j++) {
			if (v[j] == x)
				counter++;
			if (v[j] == x && counter ==2) {
				v.erase(v.begin() + j);
			}
		
		}
		counter = 0;
	}
	cout << "the output vector is " << endl;
	for (auto it = v.begin(); it != v.end(); ++it)
		cout << ' ' << *it; 
}

