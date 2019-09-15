#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	cout<<"hello world\n";
    


    cout <<fixed<<left<<setprecision(1)<<setw(15)<<33.546372<<endl;    
    cout <<fixed<<setprecision(2)<<setw(10)<<pow(2.5,3)<<endl;
    cout << fixed << setprecision( 2 ) << setw( 10 ) << pow( 2.5, 3 ) << endl;
    //d//
    unsigned int x =1;
    while(x<=20){
        if(x%5==0)
            cout<<x<<"\n";
        else
            cout<<x<<"\t";
        x++;
        
        }
 
	return 0;
}
