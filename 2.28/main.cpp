/*#include <iostream>
//(Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
//into its digits and prints them separated by three spaces each. [Hint: Use the integer division and
//modulus operators.] For example, if the user types in 42339, the program should print:
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a%10;
    cout<<d<<" "<<c<<" "<<b<<endl;
    return 0;
}
*/
/*

 * =====================================================================================

 *

 *       Filename:  ex_228.cpp

 *

 *    Description:  Exercise 2.28 - Digits of an Integer.

 *

 *        Version:  1.0

 *        Created:  11/03/16 04:42:11

 *       Revision:  none

 *       Compiler:  g++

 *

 *         Author:  Siidney Watson - siidney.watson.work@gmail.com

 *   Organization:  LolaDog Studio

 *

 * =====================================================================================

 */

#include <iostream>

#include <string>



void printDigits(int);



int main(int argc, const char *argv[]) {

    int num;



    std::cout << "Enter a five digit integer: ";

    std::cin >> num;



    printDigits(num);



    std::cout << std::endl;



    return 0;

}



/**

 * Seperates and prints digits in the correct order.

 * Prints in correct order using stack unwinding.

 * @param num.

 */

void printDigits(int num) {

    const std::string SPACES = "   ";

    if (num / 10 > 0) {

        printDigits(num / 10);

    }



    std::cout << num % 10 << SPACES;

}
