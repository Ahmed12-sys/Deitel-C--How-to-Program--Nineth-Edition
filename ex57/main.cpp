#include <iostream>
using namespace std;
//57
int main()
{
unsigned int x; // declare x
unsigned int y; // declare y
// prompt user for input
cout << "Enter two integers in the range 1-20: ";
cin >> x >> y; // read values for x and y
for ( unsigned int i = 1; i <= y; ++i ) // count from 1 to y
{
for ( unsigned int j = 1; j <= x; ++j ) // count from 1 to x
cout << '@'; // output @
cout << endl; // begin new line
} // end outer for
} // end main