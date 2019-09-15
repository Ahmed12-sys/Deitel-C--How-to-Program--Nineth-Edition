#include <iostream>
//summing Integers
using namespace std;
int main(int argc, char **argv)
{
    unsigned int numberofintegers=0;
    double sum=0;
    double x;
    cin>>numberofintegers;
    for (int i =0; i<numberofintegers;++i){
        
        cin>>x;
        sum+=x;
        }
        cout<<"the sum is "<<sum<<endl;
	return 0;
}
