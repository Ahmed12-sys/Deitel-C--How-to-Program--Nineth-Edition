// 6.12 ParkingCharges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharges(double hours) {
	double charge = 0;
	
	if (hours <= 3)
		return charge = 2;
	else if(hours>3 && hours <=24){
		double diff =hours - 3;
		diff =ceil(diff);
		charge = 2;
		for (int i = 1; i <= diff; i++) {
			charge += 0.5;
		}
		return (charge > 10) ? 10 : charge;

	}	
//	return (charge>24) ? 10:charge ;
}

int main()
{	
	double c1, c2, c3,Total;
    cout << "Hello World!\n";
	double h1, h2, h3;
	h1 = 3;
	h2 = 6.8;
	h3 = 18.5;
	c1=	calculateCharges(h1);//number of hours
	c2 = calculateCharges(h2);
	c3 = calculateCharges(h3);
	Total =c1+c2+c3;
	cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" <<  endl;
	cout << "1" << setw(10) << h1 << setw(10) << c1 <<  endl;
	cout << "2" << setw(10) << h2 << setw(10) << c2 <<  endl;
	cout << "3" << setw(10) << h3 << setw(10) << c3 << endl;
	cout << "Total" << setw(7) << h1+h2+h3 << setw(8) << Total << endl;

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
