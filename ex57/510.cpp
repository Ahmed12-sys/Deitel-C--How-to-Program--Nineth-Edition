#include <iostream>
#include <iomanip>
using namespace std;
// 5.10 (Factorials) (a > b) ? a : b
int main()
{
    double smallestNumber=99999;
int i,x,sum;
sum=1;
int numberofValues ;
for (i=1; i<=20; i++){
    for (int j =1; j<=i; j++){
        sum=sum*j;
        }
        
 cout<<"Number "<<i<<setw(20)<<"Factorial "<<sum<<endl;
    sum=1;
    }
return 0;
} // end outer for
//exceeds the size of int if i = 20

