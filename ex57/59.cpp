#include <iostream>
using namespace std;
// 5.8 (Find the Smallest Integer) (a > b) ? a : b
int main()
{
    double smallestNumber=99999;
int i,x,sum;
sum=0;
int numberofValues ;
cin>>numberofValues;
for (i=1; i<=15; i++){
    sum+=(i%2==0)? 0:i;
 
    }
 cout<<" Product of Odd Integers "<< sum;
return 0;
} // end outer for
