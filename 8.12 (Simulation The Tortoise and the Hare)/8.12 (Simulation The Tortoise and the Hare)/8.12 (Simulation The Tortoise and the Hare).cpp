// 8.12 (Simulation The Tortoise and the Hare).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<iomanip>
void moveTortoise(int *TN) {
	
	int PerTN = 1 + rand() % 10;
	if (1 <= PerTN && PerTN <= 5) {
		*TN += 3;
	}
	else if (6 <= PerTN && PerTN <= 7) {//slip
		if (*TN > 6)
			*TN -= 6;
	}
	else {
		*TN += 1;
	}
}
void moveHare(int* HN) {
	int PerHN = 1 + rand() % 10;
	if (1 <= PerHN && PerHN <= 2) {
		*HN += 0;
	}
	else if (3 <= PerHN && PerHN <= 4) {//big hop
		*HN += 9;
	}
	else if(5 == PerHN) {//slip
		if(*HN>12)
			*HN -= 12;
	}
	else if (6 <= PerHN && PerHN <= 8) {//small hop
		*HN += 1;
	}
	else {
		*HN += 2;
	}
}

int main()
{

	srand(time(0));
	int* Hptr = nullptr;
	int* Tptr = nullptr;
	unsigned long counter = 0;
	int HN = 1;
	int TN = 1;
	Hptr = &HN;
	Tptr = &TN;
	int diff_T = 0;
	int diff_H = 0;
	std::cout << "BANG !!!!! \n"
		"AND THEY'RE OFF !!!!!" << std::endl;
	while (true)//,,,,,,,,,,,,,,,,,,,,,,,
	{

		counter++;
		moveTortoise(Hptr);
		moveHare(Tptr);
		if (*Hptr >= 70 && *Hptr > *Tptr) {
			std::cout << "Hare wins. Yuch." << std::endl;
			std::cout << "Hare :" << *Hptr<< "points" << std::endl;
			std::cout << "TORTOISE :" << *Tptr << "points" << std::endl;
			break;
		}
		else if (*Tptr >= 70 && *Hptr < * Tptr)
		{
			std::cout << "TORTOISE WINS !!! YAY!!!" << std::endl;
			std::cout << "TORTOISE :" << *Tptr << "points" << std::endl;
			std::cout << "Hare :" << *Hptr << "points" << std::endl;
			break;
		}
		else if (*Tptr >= 70 && *Hptr >= 70 && *Hptr == *Tptr) {
			std::cout << "It's a tie" << std::endl;
			break;
		}
	
		diff_T = 70 - *Tptr +1;
		std::cout << std::setw(0 + *Tptr) << std::setfill('-') <<"T"<< std::setw(diff_T) << std::setfill('-') << "." << std::endl;

		std::cout << std::setw(0 + *Hptr) << std::setfill('-') << "H" << std::setw(70-*Hptr+ 1) << std::setfill('-') << "." << std::endl;
		//std::cout << std::setw(70) << std::setfill('-') << std::endl;
		 if (*Hptr == *Tptr) {
			std::cout << "OUCH!!" << std::endl;
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
