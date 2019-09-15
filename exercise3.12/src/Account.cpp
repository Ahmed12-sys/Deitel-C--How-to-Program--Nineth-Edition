#include "Account.h"

Account::Account(int balance)
{
    if (balance >= 0)
    {
        m_Counter = balance;
    }
    else
    {
        cerr << "the initial balance is invalid "<<endl;
    }
}
Account::credit(int balance)
{

    Account.m_Counter =Account.m_Counter+ balance;

}
Account::debit(int balance)
{


    if (balance < Account.m_Counter )
    {
        Account.m_Counter =Account.m_Counter - balance;
    }
    else
    {
        cerr << "Debit amount exceeded account balance. "<<endl;
    }

}
Account::getBalance(){
return Account.m_Counter;
}
