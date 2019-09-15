#include <iostream>
//(Printing) Write a program that prints the numbers 1 to 4 on the same line with each pair
//of adjacent numbers separated by one space. Do this several ways:
//a) Using one statement with one stream insertion operator.
//b) Using one statement with four stream insertion operators.
//c) Using four statements
using namespace std;

int main()
{
    cout << "1 2 3 4" << endl;
    cout << "1 "
        <<"2 "
        <<"3 "
        <<"4" << endl;
    cout<<"1";
    cout<<" 2 ";
    cout<<"3 ";
    cout<<"4 ";


    return 0;
}
