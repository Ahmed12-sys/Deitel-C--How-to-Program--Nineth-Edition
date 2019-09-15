#include <iostream>
//summing Integers
using namespace std;
static const int EXIT =9999;
int main(int argc, char **argv)
{
    unsigned int numberofintegers=0;
    double sum=0;
    double x;
    double i;
    for ( i =0; i!=9999;++i){
        
        cin>>x;
        if (x==EXIT)
        break;
        
        sum+=x;
        }
        cout<<"the average is "<<(sum/i)<<endl;
	return 0;
}
