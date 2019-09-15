#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    public:
        /** Default constructor */
        Account();

        void credit(std::int);
        void debit (std::int);
        std::int getBalance();
        unsigned int Getm_Counter() { return std::m_Counter; }

        void Setm_Counter(unsigned int val) { std::m_Counter = val; }


    private:
        std::unsigned int m_Counter; //!< Member variable "m_Counter"
};

#endif // ACCOUNT_H
