#include <iostream>

//Multiples) Write a program that reads in two integers and determines and prints if the first
//is a multiple of the second. [Hint: Use the modulus operator.]
int main()
{
int    a=12;
   int  b=6;

    if(a%b==0){
        std::cout<<" number "<<a<<" is a multiple of the "<<b<<std::endl;

    }else {
     std::cout<<" number "<<a<<" isNOOT a multiple of the "<<b<<std::endl;
    }


    return 0;
}
