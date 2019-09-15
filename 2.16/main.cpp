#include <iostream>
//2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
//numbers from the user and prints the sum, product, difference, and quotient of the two numbers.

int main()
{
    int x=0,y=0;
    std::cout<<"Please Enter Two integer numbers "<<std::endl;
    std::cin>>x>>y;
     std::cout<<"Sum = "<<x+y<<std::endl;
     std::cout<<"Product = "<<x*y<<std::endl;
     std::cout<<"Difference = "<<x-y<<std::endl;
     std::cout<<"Quotient = "<<x%y<<std::endl;
    return 0;
}
