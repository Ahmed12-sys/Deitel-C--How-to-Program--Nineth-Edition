#include <iostream>


//(Odd or Even) Write a program that reads an integer and determines and prints whether
//it�s odd or even. [Hint: Use the modulus operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.]
int main()
{
    int a;
    a=12;
    if(a%2==0){
    std::cout << "Even" << std::endl;
    }
    else{
    std::cout << "Odd!" << std::endl;
    }
    return 0;
}
