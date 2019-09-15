#ifndef INVOICE_H
#define INVOICE_H
#include <string>
class Invoice
{
public:
     Invoice(std::string,std::string,int,int);
    void setPartNumber(std::string);
    std::string getPartNumber();
    int getPricePerItem(); 

    void setPartDescription(std::string);
    std::string getPartDescription();


    void setQuantity(int);
    int getQuantity();

    void setPricePerItem(int);
     
    
    int getInvoiceAmount ();
private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    int pricePerItem;
};
#endif  //<-- this too

