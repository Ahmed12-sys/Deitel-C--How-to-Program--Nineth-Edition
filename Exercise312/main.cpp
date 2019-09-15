#include <iostream>
#include "Invoice.hpp"
using namespace std;
int main()
{
    Invoice invoice1("255","Sword",2,3);
    cout<<"Part Number: "<<invoice1.getPartNumber()<<endl;
    cout<<"Part Description: "<<invoice1.getPartDescription()<<endl;
    cout<<"Price per item: "<<invoice1.getPricePerItem()<<endl;
    cout<<"Quantity: "<<invoice1.getQuantity()<<endl;
    
    cout <<"the amount is:  "<<invoice1.getInvoiceAmount()<<endl; 
    return 0;
}
