#include <iostream>
using namespace std;
// 5.8 (Find the Smallest Integer) (a > b) ? a : b
int main()
{
    double smallestNumber=99999;
int i,x;
int numberofValues ;
cin>>numberofValues;
for (i=0; i<numberofValues; i++){
    cin>>x;
    smallestNumber = (smallestNumber < x )?  smallestNumber: x;
    /*
     * if ((current <smallest) || (i==0))
     * smallest = current ;
     * /
    }
 cout<<"the smallest number is "<< smallestNumber;
return 0;
} // end outer for
