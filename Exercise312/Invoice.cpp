#include <string>
#include "Invoice.hpp"


using namespace std;
Invoice::Invoice(std::string partNumberF,std::string partDescriptionF,int quantityF ,int pricePerItemF)
{
    setPartNumber(partNumberF);
    setPartDescription(partDescriptionF);
    setQuantity(quantityF);
    setPricePerItem(pricePerItemF);
}
//SETTERS

void Invoice::setPartNumber(string partNumberF){partNumber=partNumberF;}
void Invoice::setPartDescription(string partDescriptionF){partDescription=partDescriptionF;}
void Invoice::setQuantity(int quantityF){quantity=quantityF;}
void Invoice::setPricePerItem(int pricePerItemF){pricePerItem=pricePerItemF;}

// Getters 

string Invoice:: getPartNumber(){return partNumber;}
string Invoice::getPartDescription(){return partDescription;}
int Invoice::getPricePerItem(){return pricePerItem;}
int Invoice::getQuantity(){return quantity;}

//////////////////////////////
int Invoice::getInvoiceAmount () {return getPricePerItem()* getQuantity();}
       

